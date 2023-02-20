//
// Created by Jessie Mejia on 2/19/23.
//

#include "Helper2.h"

std::string Helper2::removeTrailingZeros(const std::string &number) {
    std::string s = number;

    while (s.back() == '0')
        s.pop_back();
    if (s.back() == '.')
        s.pop_back();

    return s;
}
