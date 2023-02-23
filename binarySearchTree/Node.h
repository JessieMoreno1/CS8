//
// Created by Jessie Mejia on 2/23/23.
//

#ifndef BINARYSEARCHTREE_NODE_H
#define BINARYSEARCHTREE_NODE_H

template<typename T>
struct Node {
    T data;
    Node<T> *left, *right = nullptr;
};


#endif //BINARYSEARCHTREE_NODE_H
