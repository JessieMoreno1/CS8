//
// Created by Jessie Mejia on 2/16/23.
//

#include "RPN.h"

RPN::RPN() {

}

std::string RPN::calculate(std::string expression) {
    std::string RPN;

    for (int i = 0; i < expression.length(); ++i)
    {
        // adding numbers to the queue
        if (isdigit(expression[i]))
        {
            integers.push(std::to_string(expression[i]));
        }

        // adding symbols to the stack
        if (!isdigit(expression[i]) )
        {
            if ( expression[i] != '.' && operations.empty() )
            {
                operations.push(std::to_string(expression[i]));
            }

            // if the current index of the expression is a multiplication or division sign
            if ( expression[i] == '*' || expression[i] == '/')
            {
                // check the sign of the top of the stack
                if (operations.top() == "-" || operations.top() == "+")
                {
                    operations.push(std::to_string(expression[i]));     // the precedence is fine here
                }
            }

            // if the current index is a minus sign or an addition sign
            // but the top of the stack has higher precedence
            if (expression[i] == '+' || expression[i] == '-')
            {
                // check the sign on the top of the stack
                if (operations.top() == "*" || operations.top() == "/")
                {
                    std::string top = operations.top();
                    operations.pop();
                    integers.push(top);
                }
            }
        }

    }
    return RPN;
}
