//
// Created by Jessie Mejia on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_CPP
#define BINARYSEARCHTREE_BINARYTREE_CPP

#include "BinaryTree.h"

template<typename T>
BinaryTree<T>::BinaryTree() {

}

template<typename T>
BinaryTree<T>::BinaryTree(const BinaryTree &tree) {

}

template<typename T>
BinaryTree<T>::~BinaryTree() {

}

//template<typename T>
//bool BinaryTree<T>::isGreater(Node<T> *node, Node<T> *parent) {
//    return false;
//}

template<typename T>
void BinaryTree<T>::preorder(Node<T> *node, void (*f)(T &)) {

}

template<typename T>
template<typename S>
void BinaryTree<T>::preorder(Node<T> *node, void (S::*f)(T&), S &obj) {
    (obj.*f)(node -> data);
    if (node->left != nullptr)
        preorder(node->left, f,obj);
    if (node->right != nullptr)
        preorder(node->right, f,obj);
}



template<typename T>
BinaryTree<T>::BinaryTree(const T &data) {

}

template<typename T>
void BinaryTree<T>::output(T &data) {

}

template<typename T>
void BinaryTree<T>::preorder(void (*f)(T &)) {
    preorder(root,f);
}

template<typename T>
template<typename S>
void BinaryTree<T>::preorder(void (S::*f)(T &), S &obj) {
    preorder(root,f,obj);
}

template<typename T> // private
void BinaryTree<T>::push(Node<T> *node, const T& data) {
    if (node == nullptr)
        node->data = data;

    else if(node->data < data) {
        if (node->left != nullptr)
            push(node->left, data);
        else
            node->right = new Node<T>(data);
    }
    else {
        if (node->right != nullptr)
            push(node->right, data);
        else
            node->left = new Node<T>(data);
    }
}

template<typename T>
BinaryTree<T>& BinaryTree<T>::operator=(const BinaryTree &tree) {

}

template<typename T>
void BinaryTree<T>::push(const T &data) {
    push(root,data);

}

#endif