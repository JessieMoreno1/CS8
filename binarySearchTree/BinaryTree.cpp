//
// Created by Jessie Mejia on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_CPP
#define BINARYSEARCHTREE_BINARYTREE_CPP

#include "BinaryTree.h"

template<typename T>
bool BinaryTree<T>::isGreater(Node<T> *node, Node<T> *parent) {
    return false;
}

template<typename T>
void BinaryTree<T>::preorder(Node<T> *node, void (*f)(T &)) {

}

template<typename T>
template<typename S>
void BinaryTree<T>::preorder(Node<T> *node, void (*f)(S &), S &obj) {
    (obj.*f)(node -> data);
}

template<typename T>
BinaryTree<T>::BinaryTree() {

}

template<typename T>
BinaryTree<T>::BinaryTree(const T &data) {

}

template<typename T>
void BinaryTree<T>::output(T &data) {

}

template<typename T>
void BinaryTree<T>::preorder(void (*f)(T &)) {

}

template<typename T>
template<typename S>
void BinaryTree<T>::preorder(void (*f)(T &), S &obj) {

}

#endif