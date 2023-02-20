//
// Created by Jessie Mejia on 2/16/23.
//

#include "QueensRecursive.h"

QueensRecursive::QueensRecursive() : QueensRecursive(6) {

}

QueensRecursive::QueensRecursive(int n) {
    // create board
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
            std::cout << board[i][j] << " ";
        }
        std::cout<<std::endl;
    }
}

bool QueensRecursive::place(int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            // place queen if the index is right
        }
    }
}

