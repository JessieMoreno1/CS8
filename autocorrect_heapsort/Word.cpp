//
// Created by Jessie Mejia on 3/23/23.
//

#include "Word.h"


Word::Word() {
    priority = 0;
}

bool operator!=(const Word &lhs, const Word &rhs) {
    return lhs.priority != rhs.priority;
}

bool operator==(const Word &lhs, const Word &rhs) {
    return lhs.priority == rhs.priority;
}

bool operator>(const Word &lhs, const Word &rhs) {
    return lhs.priority > rhs.priority;
}

bool operator<(const Word &lhs, const Word &rhs) {
    return lhs.priority < rhs.priority;
}

bool operator>=(const Word &lhs, const Word &rhs) {
    return lhs.priority >= rhs.priority;
}

bool operator<=(const Word &lhs, const Word &rhs) {
    return lhs.priority <= rhs.priority;
}


void Word::setPriority(float priority) {
    this -> priority = priority;
}

float Word::getPriority() const {
    return priority;
}
