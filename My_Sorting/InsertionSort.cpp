#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], size_t size)
{
    for (int i = 1; i < size; i++)
    {
        int index = i;
        int value = arr[i];
        while (arr[index - 1] > value && index > 0)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}

void printFunction(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << ("\n") << endl;
}

int main()
{
    int array[] = {33, 5, 88, 14, 26, 78, 40, 9, 52, 20};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "**** Before sorting****" << endl;
    printFunction(array, size);
    cout << "**** after sorting****" << endl;
    insertionSort(array, size);
    printFunction(array, 10);
    return 0;
}