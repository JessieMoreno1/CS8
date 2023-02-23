//
// Created by Jessie Mejia on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_H
#define BINARYSEARCHTREE_BINARYTREE_H

#include "Node.h"

template <typename T>
class BinaryTree {
private:
    Node<T>* root = nullptr;
    bool isGreater(Node<T>* node, Node<T>* parent);
    void preorder(Node<T>* node, void (*f)(T&));

    template <typename S>
    void preorder(Node<T>* node, void (S::*f)(S&), S& obj);

public:
    BinaryTree();
    BinaryTree(const T& data);

    //default output function
    void output(T& data);

    // traversal
    void preorder(void (*f)(T&));

    template <typename S>
    void preorder(void (S::*f)(T&), S& obj);




};

#include "BinaryTree.cpp"
#endif //BINARYSEARCHTREE_BINARYTREE_H
