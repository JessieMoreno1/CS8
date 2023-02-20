//
// Created by Jessie Mejia on 2/16/23.
//

#ifndef CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H
#define CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H

#include <iostream>

class QueensRecursive {
private:
    int board[0][0];
public:
    QueensRecursive();
    QueensRecursive(int n);
    bool place(int row, int col);
};


#endif //CS8_NQUEENSRECURSIVE_QUEENSRECURSIVE_H
