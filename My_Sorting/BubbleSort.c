/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.c
 * Author: Sanket Halake 
 *
 * Created on 13 May 2021, 9:51 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define NO_OF_ELEMENTS 8
/*
* 
*/
void printFunction(int[] , size_t size);
void swap(int[] , int a, int b);
void sort(int[] , size_t size);
void accept_data(int[] , size_t size);

int main(int argc, char** argv) {
   int arr [ NO_OF_ELEMENTS ];
   accept_data(arr, NO_OF_ELEMENTS);
   printf("Elements before Sorting are : \n");
   printFunction(arr, NO_OF_ELEMENTS);
   sort(arr, NO_OF_ELEMENTS);
   printf("Elements after Sorting are : \n");
   printFunction(arr, NO_OF_ELEMENTS);
   return 0;
}
void printFunction(int arr[], size_t size){
   
   for(int i = 0 ; i < size ; i++){
       printf("%d\t", arr[i]);
   }
   printf("\n");
}
void swap(int arr[] , int a, int b){
   int temp = arr[a];
   arr[a] = arr[b];
   arr[b] = temp;
}
void sort(int arr[] , size_t size){
   int counter = 0; 
   for(int i = 0; i < size; i++){
       for(int j = i+1 ; j < size; j++){
           counter++;
           if(arr[j] < arr [i]){
               swap(arr, i, j);
           }
       }
   }
   printf("Counter is : %i", counter);
}
void accept_data(int arr[] , size_t size){
   printf("Enter elements \n");
   for(int i = 0; i < NO_OF_ELEMENTS; i++){
       printf("value of %2i is : ", i+1);
       scanf("%i", &arr[i]);
   }
   
}




