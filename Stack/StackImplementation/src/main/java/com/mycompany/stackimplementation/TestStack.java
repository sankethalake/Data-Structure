/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.stackimplementation;

/**
 *
 * @author Sanket Halake
 */
public class TestStack {

    public static void main(String args[]) {
//        stackImplementationUsingArray();
        stackImplementationUsingList();
    }

    private static void stackImplementationUsingArray() {
        // TODO code application logic here
//        StackUsingArray <String> stack = new StackUsingArray(3);
        StackUsingArray stack = new StackUsingArray();
        try {
            stack.push("sanket");
            stack.push("rohan");
            stack.push("yash");
            stack.push("jay");
            System.out.println(stack.peek());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
        } catch (StackFullException sfe) {
            System.out.println(sfe.getMessage());
        } catch (StackEmptyException see) {
            System.out.println(see.getMessage());
        }
    }

    private static void stackImplementationUsingList() {
        StackList stack = new StackList();
        Student sanket = new Student("Sanket");
        Student Yash = new Student("Yash");
        Student Rohan = new Student("Rohan");
        Student Jay = new Student("Jay");
        
        try {
            stack.push(sanket);
            stack.push(Yash);
            stack.push(Rohan);
            stack.push("Jay");
            System.out.println(stack.peek());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
            System.out.println(stack.pop());
//            System.out.println(stack.pop());
        } catch (StackFullException sfe) {
            System.out.println(sfe.getMessage());
        } catch (StackEmptyException see) {
            System.out.println(see.getMessage());
        }
    }
}
