//
// Created by Jessie Mejia on 2/16/23.
//

#include "RPN.h"

const std::string RPN::ops = "+-*/=^()";

int RPN::getPrecendence(char oper) {
    switch(oper)
    {
        case '-':
        case '+':
            return 1;
        case '/':
        case '*':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }

}

bool RPN::isOperator(const char oper) {
    return RPN::ops.find(oper) != std::string::npos;
}

float RPN::solve(float a, float b, char operation) {
    if (isOperator(operation))
    {
        switch (operation) {
            case '-':
                return b - a;
            case '+':
                return b + a;
            case '*':
                return b * a;
            case '/':
                return b / a;
            case '^':
                return pow(b, a);
            default:
                return 0;
        }
    }
}

std::queue<std::string> RPN::postFix(const std::string &expression) {
    std::vector<std::string> v;

    int counter = 0;
    while (expression[counter] != '\0')
    {
        v.emplace_back("");
        if (isOperator(expression[counter]))
        {
            v[v.size() - 1].push_back(expression[counter++]);
        }
        else
        {
            while (expression[counter] != '\0' && !isOperator(expression[counter]))
            {
                v[v.size() - 1].push_back(expression[counter++]);
            }
        }
    }

    std::stack<std::string> stack;
    std::queue<std::string> postfix;

    for (std::string s: v) {
        if (isdigit(s[0]))
        {
            postfix.push(s);
        }
        else if (s[0] == '(') {
            stack.push(s);
        }
        else if(s[0] == ')')
        {
            while (stack.top() != "(") {
                postfix.push(stack.top());
                stack.pop();
            }
            stack.pop();
        }
        else
        {
            while (!stack.empty() && getPrecendence(stack.top()[0]) >= getPrecendence(s[0]))
            {
                postfix.push(stack.top());
                stack.pop();
            }
            stack.push(s);
        }
    }
    while (!stack.empty()) {
        postfix.push(stack.top());
        stack.pop();
    }
    return postfix;
}

float RPN::calculate(const std::string& expression) {
    std::queue<std::string> postfix = postFix(expression);
    std::stack<float> solution;

    while (!postfix.empty()) {
        if (!isOperator(postfix.front()[0])) {
            solution.push(std::stof(postfix.front()));
            postfix.pop();
        }
        else {
            float a = solution.top();
            solution.pop();

            float b = solution.top();
            solution.pop();

            solution.push(solve(a, b, postfix.front()[0]));
            postfix.pop();
        }
    }
    return solution.top();
}
