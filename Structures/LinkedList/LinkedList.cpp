//
// Created by nachtwandler on 08.01.23.
//

#include "LinkedList.h"

template<class T>
void LinkedList<T>::push(T value) {
    this->push(new ListNode<T>(value));
}

template<class T>
void LinkedList<T>::push(INode<T> *newNode) {
    this->size++;
    this->root->push(newNode);
}

template<class T>
std::vector<T> LinkedList<T>::getArray() {
    using std::vector;
    vector<T> result = {};
    ListNode<T>* temp = this->root;
    for (int i = 0; i < this->size; ++i) {
        result.push_back(temp->getValue());

    }
    return result;
}