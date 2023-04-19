//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef REHEAPIFY_HEAP_H
#define REHEAPIFY_HEAP_H

/*
 * - ReheapifyUp(int childIndex) -> put the child where it belongs
 * - ReheapifyDown(int parentIndex) -> put the parent where it belongs
 * - swap(int childIndex, int ParentIndex) -> call the c++ swap and swap the data at those index
 * - push(const T& item) ->
 * - pop() ->
 * - T& top()
 * - int size()
 * - empty()
 *
 * - getParent(int childIndex) -> index of the parent
 * - getLeftChild(int parentIndex) -> index of left child
 * - getRightChild(int parentIndex) -> index of right child
 * - getMaxChild(int parentIndex) -> index of the max child
 *      - if no children are bigger than parent:
 *              - return the parent
 */

#include <vector>
#include <iostream>
#include <SFML/Graphics.hpp>

template<typename T>
class Heap : public std::vector<T> {

public:
    Heap();
    void push(const T& item);
    void pop();
    T& top();
    void swap(int childIndex, int parentIndex);

    void reheapifyUp(int childIndex);
    void reheapifyDown(int parentIndex);

    int getParent(int childIndex);
    int getLeftChild(int parentIndex);       // return the index of the left child
    int getRightChild(int parentIndex);      // return the index of the right child
    int getMaxChild(int parentIndex);        // return index of the max child

    const std::vector<T> &getVector() const;

    void sort();

    void operator += (const T& item);
};

#include "Heap.cpp"
#endif //REHEAPIFY_HEAP_H
