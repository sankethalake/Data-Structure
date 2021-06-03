#include <iostream>
#include <algorithm>
using namespace std;

void printFunction(int arr[], int size);
void shellSort(int arr[], size_t size);

int main()
{
    int array[] = {2, 4, 5, 2, 9, 5, 6, 1, 4, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "\t*****before sorting*****" << endl;
    printFunction(array, size);
    shellSort(array, size);
    cout << "\t*****after sorting*****" << endl;
    printFunction(array, size);
}

void printFunction(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << ("\n") << endl;
}

void shellSort(int arr[], size_t size)
{
    size_t shell;
    shell = size / 2;
    if (shell % 2 == 0)
    {
        shell++;
    }
    while (shell > 0)
    {
        for (int i = 0; (i + shell) < size; i++)
        {
            if (arr[i] > arr[i + shell])
            {
                swap(arr[i], arr[i + shell]);
            }
        }
        shell--;
    }
}
