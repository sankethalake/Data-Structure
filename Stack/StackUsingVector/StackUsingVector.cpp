/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackUsingVector.cpp
 * Author: Sanket Halake 
 *
 * Created on 1 June 2021, 3:58 PM
 */


#include <iostream>
#include "Stack.h"
#include <stdexcept>
#include <vector>

using namespace std;

/*
 * 
 */

int main() {
    Stack<int> intStack(6);
    try {
        int i = 10;
        intStack.push(10);
        //        intStack.push(20);
        //        intStack.push(30);
        //        intStack.push(40);
        //        intStack.push(50);
        //        cout<<intStack.isEmpty();
        //        std::cout << "Peek : " << intStack.peek() << std::endl;
        //        std::cout << intStack.pop() << std::endl;
        //        std::cout << intStack.pop() << std::endl;
        //        std::cout << intStack.pop() << std::endl;
        //        std::cout << intStack.pop() << std::endl;
        //        std::cout << intStack.pop() << std::endl;

    } catch (std::out_of_range err) {
        //        std::cerr << err.what() << std::endl;
        cerr << "exception" << endl;


    }

    return 0;
}

