//
// Created by Jessie Mejia on 2/16/23.
//

#ifndef CALCULATOR_RPN_H
#define CALCULATOR_RPN_H

#include <stack>
#include <queue>
#include <iostream>
#include "CalcScreen.h"
#include <cmath>


class RPN {
private:
    static const std::string ops;
    static std::queue<std::string> postFix(const std::string &expression);

    static int getPrecendence(char oper);
    static bool isOperator(const char oper);
    static float solve(float a, float b, char operation);

public:
    static float calculate(const std::string& expression);


};


#endif //CALCULATOR_RPN_H
