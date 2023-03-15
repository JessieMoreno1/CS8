//
// Created by Jessie Mejia on 2/23/23.
//

#ifndef BINARYSEARCHTREE_BINARYTREE_CPP
#define BINARYSEARCHTREE_BINARYTREE_CPP

#include "BinaryTree.h"
#include <iostream>

template<typename T>
BinaryTree<T>::BinaryTree() {
    root = new Node<T>{0};
}

template<typename T>
BinaryTree<T>::BinaryTree(const BinaryTree &tree) {
    root = tree.root;
}

template<typename T>
BinaryTree<T>::~BinaryTree() {
    deleteNode(root);
}

template<typename T>
void BinaryTree<T>::deleteNode(Node<T> *node) {

    if (node->left == nullptr && node->right == nullptr)
        delete node;

    else if (node->left)
        deleteNode(node->left);
    else if (node->right)
        deleteNode(node->right);

}

template<typename T>
void BinaryTree<T>::preorder(Node<T> *node, void (*f)(T &)) {
    if (node ) {
        (*f)(node->data);
        preorder(node->left, f);
        preorder(node->right, f);

    }
}

template<typename T>
template<typename S>
void BinaryTree<T>::preorder(Node<T> *node, void (S::*f)(T&), S &obj) {
    if (node ) {
            (obj.*f)(node->data);
            preorder(node->left, f, obj);
            preorder(node->right, f, obj);

    }
}

template<typename T>
BinaryTree<T>::BinaryTree(const T &data) {
    root = new Node<T>{data};
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
void BinaryTree<T>::push(Node<T> *&node, const T& data) {
    if (node == nullptr) {
        node = new Node<T>{data};
    }
    else if (node->data < data) {
        push(node->right, data);
    }
    else {
        push(node->left, data);
    }
}

template<typename T>
BinaryTree<T>& BinaryTree<T>::operator=(const BinaryTree &tree) {

}

template<typename T>
void BinaryTree<T>::push(const T &data) {

    push(root,data);
}

template<typename T>
void BinaryTree<T>::inorder(Node<T> *node, void (*f)(T &)) {
    if (node)
    {
        inorder(node -> left, f);
        (*f)(node-> data);
        inorder(node->right, f);
    }
}

template<typename T>
template<typename S>
void BinaryTree<T>::inorder(Node<T> *node, void (*f)(T &), S &obj) {
    if (node)
    {
        inorder(node -> left, f, obj);
        (obj.*f)(node-> data);
        inorder(node->right, f, obj);
    }
}

template<typename T>
void BinaryTree<T>::postorder(Node<T> *node, void (*f)(T &)) {

}

template<typename T>
template<typename S>
void BinaryTree<T>::postorder(Node<T> *node, void (*f)(T &), S &obj) {
    if (node)
    {
        postorder(node->left, f, obj);
        postorder(node-> right, f, obj);
        (obj.*f)(node -> data);
    }
}

template<typename T>
template<typename S>
void BinaryTree<T>::breatheFirst( void (*f)(T &), S obj) {
    q.push(root);

    while (!q.empty())
    {
        if (q.front() -> left)
        {
            q.push(q.front() -> left);
        }
        if (q.front() -> right)
        {
            q.push(q.front() -> right);
        }

        (obj.*f)(q.front() -> data);

        q.pop();

    }
}


template<typename T>
void BinaryTree<T>::postorder(void (*f)(T &)) {
    postorder(root,f);
}

template<typename T>
void BinaryTree<T>::inorder(void (*f)(T &)) {
    inorder(root,f);
}

template<typename T>
template<typename S>
void BinaryTree<T>::postorder(void (*f)(T &), S &obj) {
    postorder(root,f,obj);
}

template<typename T>
template<typename S>
void BinaryTree<T>::inorder(void (*f)(T &), S &obj) {

}

#endif