//
// Created by Jessie Mejia on 2/16/23.
//

#ifndef CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H
#define CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H

#include <iostream>
#include <vector>

class QueensRecursive {
private:
    std::vector<int> x;
    int n = 0;
public:
    QueensRecursive();
    QueensRecursive(int n);
    bool solve(int k);
    bool place(int row, int col);
    void print();
};


#endif //CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H
