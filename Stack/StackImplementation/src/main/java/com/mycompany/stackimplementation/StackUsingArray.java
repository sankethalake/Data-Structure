/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.stackimplementation;

/**
 *
 * @author Sanket Halake
 * @param <E>
 */
public class StackUsingArray<E> implements Stack<E> {

    /** Array that will hold our stack*/
    private E[] stk;
    
    /** index to topmost element in the stack */
    private int top;
    
    /** maximum number of elements stack can hold*/
    private int capacity = 10;
    
    /** initializes array with default capacity ie 10*/
    public StackUsingArray() {
        initializeArray();
    }
    
    /** initializes array with specified capacity */
    public StackUsingArray(int capacity) {
        this.capacity = capacity;
        initializeArray();
    }
    
    /** Creates array object of type E and initializes top to -1 */ 
    private void initializeArray() {
        stk = (E[]) new Object[capacity];
        top = -1;
    }

    
    @Override
    public void push(E element) throws StackFullException {
        if (isFull()) {
            throw new StackFullException("Stack is full");
        }
        stk[++top] = element;
    }

    @Override
    public E pop() throws StackEmptyException {
        if (isEmpty()) {
            throw new StackEmptyException("Stack is empty");
        }
        E element = stk[top--];
        return element;
    }

    @Override
    public E peek() throws StackEmptyException {
        if (isEmpty()) {
            throw new StackEmptyException("Stack is empty");
        }
        return stk[top];
    }

    @Override
    public boolean isEmpty() {
        return (top == -1);
    }

    @Override
    public boolean isFull() {
        return (top == (capacity - 1));
    }

}
