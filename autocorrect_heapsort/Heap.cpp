//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef REHEAPIFY_HEAP_CPP
#define REHEAPIFY_HEAP_CPP

#include "Heap.h"

template<typename T>
Heap<T>::Heap() {

}

/*
 * Reheapify Up logic
 * --------------------------------------
 * ReheapifyUp ( int childIndex) // starting with the child index
 * - get the parent index
 * - compare child and parent values
 *      - if child's value is greater than parent value, then swap values
 * - call the reheapifyUp again ( recursive way ) , pass in the parent index.
 */
template<typename T>
void Heap<T>::reheapifyUp(int childIndex) {
    if (childIndex != 0)
    {
        int parent = getParent(childIndex);
        int max = getMaxChild(parent);
        if (max != parent ) {
            swap(childIndex, parent);
            reheapifyUp(parent);
        }
    }
}

/*
 * ReheapifyDown Logic
 * -------------------------------------
 * ReheapifyDown(int parentIndex) // starting with the parent index
 * - Get the max, it is equal to the max child index. Pass in the parent
 *      - max = maxChildIndex(Parent)
 * - if max is greater than parent, then swap child and parent
 * - reheapifyDown ( max )
 */
template<typename T>
void Heap<T>::reheapifyDown(int parentIndex) {
    if (parentIndex != 0)
    {
        int max = getMaxChild(parentIndex);
        if (max != parentIndex) {
            swap(parentIndex, max);
            reheapifyDown(max);
        }
    }
}

template<typename T>
void Heap<T>::swap(int childIndex, int parentIndex) {
    std::swap(v.at(childIndex), v.at(parentIndex));
}

template<typename T>
void Heap<T>::push(const T &item) {
    v.push_back(item);
    reheapifyUp(size() - 1);
}

template<typename T>
void Heap<T>::pop() {
    swap (size() - 1,0);
    v.pop_back();
    reheapifyDown();
}

template<typename T>
T &Heap<T>::top() {
    return v.front();
}

template<typename T>
int Heap<T>::size() {
    return v.size();
}

template<typename T>
bool Heap<T>::empty() {
    if (v.empty())
        return true;
    return false;
}

template<typename T>
int Heap<T>::getParent(int childIndex) {
    int index = childIndex + 1; // taking into account the root

    return (index - 1) / 2;
}

template<typename T>
int Heap<T>::getLeftChild(int parentIndex) {
    return parentIndex * 2 + 1;
}

template<typename T>
int Heap<T>::getRightChild(int parentIndex) {
    return (parentIndex * 2) + 2;
}

template<typename T>
int Heap<T>::getMaxChild(int parentIndex) {
    int maxChild;
    if ( size() > parentIndex * 2 + 2)
    {
        int rightChild = getRightChild(parentIndex);
        int leftChild = getLeftChild(parentIndex);

        if (v.at(rightChild) > v.at(leftChild))
        {
            maxChild = rightChild;
        }
        else
        {
            maxChild = leftChild;
        }
        return maxChild;
    }
}

template<typename T>
void Heap<T>::print() {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v.at(i) << std::endl;
    }
}

template<typename T>
void Heap<T>::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    for (int i = 0; i < v.size(); ++i) {
        target.draw(v.at(i));
    }
}

#endif