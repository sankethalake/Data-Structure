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
public interface Stack<E> {

    /**
     * Adds element in stack if stack is not full
     *
     * @param element
     * @throws com.mycompany.stackimplementation.StackFullException
     */
    void push(E element) throws StackFullException;

    /**
     * deletes topmost element from stack if stack is not empty
     *@return Element of type E
     */
    E pop() throws StackEmptyException;
    
    /**
     * Returns topmost element of stack if stack is not empty
     * @return of Element type E
     * @throws StackEmptyException 
     */
    E peek() throws StackEmptyException;
    
    /**
     * Returns True if stack is empty else otherwise false
     * @return Boolean value
     */
    boolean isEmpty();
    
    /**
     * Returns True if stack is empty else otherwise false
     * @return Boolean value
     */
    boolean isFull();

}
