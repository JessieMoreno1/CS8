//
// Created by Jessie Mejia on 3/21/23.
//

#ifndef REHEAPIFY_HEAP_CPP
#define REHEAPIFY_HEAP_CPP

#include "Heap.h"

template<typename T>
Heap<T>::Heap() {

}

template<typename T>
void Heap<T>::push(const T &item) {
    this->push_back(item);
    reheapifyUp(this->size()-1);
}

template<typename T>
void Heap<T>::pop() {
    swap(this->size() - 1,0);
    this->pop_back();
    reheapifyDown(this->size() - 1);
}

template<typename T>
T &Heap<T>::top() {
    return this->front() ;
}

template<typename T>
void Heap<T>::swap(int childIndex, int parentIndex) {
    std::swap(this->at(childIndex),this->at(parentIndex));
}

template<typename T>
void Heap<T>::reheapifyUp(int index) {
    if (index != 0) {
        int parent = getParent(index);
        int max = getMaxChild(parent);
        if(max == index){
            swap(parent, index);
            reheapifyUp(parent);
        }
    }
}

template<typename T>
void Heap<T>::reheapifyDown(int parentIndex) {
    if(!this->empty()) {
        int max = getMaxChild(parentIndex);
        if (max != parentIndex) {
            swap(parentIndex,max);
            reheapifyDown(max);
        }
    }
}

template<typename T>
int Heap<T>::getParent(int childIndex) {
    return (childIndex - 1) / 2;
}

template<typename T>
int Heap<T>::getLeftChild(int parentIndex) {
    return parentIndex * 2 + 1;
}

template<typename T>
int Heap<T>::getRightChild(int parentIndex) {
    return parentIndex * 2 + 2;
}

template<typename T>
int Heap<T>::getMaxChild(int index) {
    if (this->size() > index * 2 + 2) {
        int right = getRightChild(index);
        int left = getLeftChild(index);
        int maxChild = this->at(right) > this->at(left) ? right: left;
        return this->at(index) > this->at(maxChild) ? index: maxChild;
    }
    else if (this->size() > index * 2 + 1){
        int left = getLeftChild(index);
        return this->at(index) > this->at(left) ? index: left;
    }
    return index;
}

template<typename T>
const std::vector<T> &Heap<T>::getVector() const {
    return *this;
}

template<typename T>
void Heap<T>::sort() {

}

template<typename T>
void Heap<T>::operator+=(const T &item) {
    push(item);
}

#endif