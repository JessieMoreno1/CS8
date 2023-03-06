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
//    bool isGreater(Node<T>* node, Node<T>* parent);

    // traversal
    void preorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void preorder(Node<T>* node, void (S::*f)(T&), S& obj);

    void inorder(Node<T>* node, void(*f)(T&));
    template <typename S>
    void inorder(Node<T>* node, void (S::*f)(T&), S& obj);

    void postorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void postorder(Node<T>* node, void (S::*f)(T&), S& obj);

    void push(Node<T>* &node, const T& data);

public:
    // big 3

    BinaryTree();
    BinaryTree(const T& data);
    BinaryTree(const BinaryTree& tree);

    ~BinaryTree();

    void deleteNode(Node<T>* node);

    BinaryTree& operator=(const BinaryTree& tree);

    //default output function
    void output(T& data);

    // traversal
    void preorder(void (*f)(T&));

    template <typename S>
    void preorder(void (S::*f)(T&), S& obj);

    void inorder(Node<T>* node, void(*f)(T&));
    template <typename S>
    void inorder(Node<T>* node, void (S::*f)(T&), S& obj);

    void postorder(Node<T>* node, void (*f)(T&));
    template <typename S>
    void postorder(Node<T>* node, void (S::*f)(T&), S& obj);

    // insert function
    void push(const T& data );


};

#include "BinaryTree.cpp"
#endif //BINARYSEARCHTREE_BINARYTREE_H
