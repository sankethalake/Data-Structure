/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: Sanket Halake 
 *
 * Created on 1 June 2021, 3:13 PM
 */
#ifndef STACK_H
#define STACK_H




#include <vector>
#include <memory>
#include <stdexcept>

template <typename T>
class Stack {
private:
    size_t capacity{};
    std::vector<T> stk{};
    int top{};
public:
    Stack(size_t capacity = 5);
    ~Stack();
    Stack(Stack&) = default;
    bool isEmpty();
    bool isFull();
    void push(T);
    T pop();
    T peek();

};

template <typename T> Stack<T>::Stack(size_t capacity) {
    this->capacity = capacity;
    stk.assign(this->capacity, T());
    top = -1;
}

template <typename T> Stack<T>::~Stack() {
    stk.erase(stk.begin());
    top = 0;
    capacity = 0;
}

template <typename T> bool Stack<T>::isEmpty() {
    return top == -1;
}

template <typename T> bool Stack<T>::isFull() {
    return top = (capacity - 1);
}

template <typename T>
T Stack<T>::peek() {
    if (isEmpty()) {
        throw std::out_of_range("stack underflow");
    }
    return stk[top];
}

template <typename T>
void Stack<T>::push(T element) {
    if (isFull()) {
        throw std::out_of_range("stack overflow");
    }
    ++top;
    stk[top] = element;
    return;
}

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        throw std::out_of_range("stack underflow");
    }
    T element = stk[top];
    //    stk.erase(top);
    top--;
    return element;
}

#endif