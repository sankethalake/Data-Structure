/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.stackimplementation;

import java.util.ArrayList;

import java.util.List;

/**
 *
 * @author Sanket Halake
 * @param <E>
 */
public class StackList<E> implements Stack<E> {
    /** 
     * list which will act like a container
     */
    private List<E> stk;
    
    /**
     * index to the top element of stack
     */
    private int top;
    
    /** size of the stack*/
    private int capacity = 10;
    
    /** Creates a list of default size (10) and initializes top*/
    public StackList(){
        initializeList();
    }
    
    /** Creates a list of preferred size and initializes top*/
    public StackList(int capacity){
        this.capacity = capacity;
        initializeList();
        
    }
    @Override
    public void push(E element) throws StackFullException {
        if(isFull()){
            throw new StackFullException("stack overflow");
        }   
        stk.add(++top,element);
    }

    @Override
    public E pop() throws StackEmptyException {
        if(isEmpty()){
            throw new StackEmptyException("stack Underflow");
        }
        E element = stk.get(top);
        stk.remove(top--);
        return element;
    }

    @Override
    public E peek() throws StackEmptyException {
        if(isEmpty()){
            throw new StackEmptyException("stack Underflow");
        }
        return stk.get(top);
    }

    @Override
    public boolean isEmpty() {
        return top == -1;
    }

    @Override
    public boolean isFull() {
        return (top == (capacity-1));
    }
    
    /**
     * Allocates memory for stk and initializes top to -1
     */
    private void initializeList() {
        stk = new ArrayList<>(capacity);
        top = -1;
    }
    
}
