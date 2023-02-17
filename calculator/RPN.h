//
// Created by Jessie Mejia on 2/16/23.
//

#ifndef CALCULATOR_RPN_H
#define CALCULATOR_RPN_H

#include <stack>
#include <queue>
#include <iostream>
#include "CalcScreen.h"


class RPN {
private:
    std::stack<std::string> operations;
    std::queue<std::string> integers;
public:
    RPN();
    std::string calculate(std::string expression);


};


#endif //CALCULATOR_RPN_H
