#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10

void printList(int list[], int size);
void quickSort(int arr[], int lowerbound, int upperbound);

int main()
{
    int list[MAX] = {2, 34, 56, 7, 8, 45, 3, 27, 5, 9};
    int no_of_elements = 10;
    cout << "The list before sorting is:\n"
         << endl;
    printList(list, no_of_elements);

    quickSort(list, 0, no_of_elements - 1); //array,lowerbound,upperbound

    cout << "\nThe list after sorting is:\n"
         << endl;
    printList(list, no_of_elements);
    return 0;
}

void printList(int list[], int size)
{
    int i;
    //    printf("\nThe elements of the list are: \n");
    for (i = 0; i < size; i++)
    {
        cout << list[i] << "\t";
    }
    printf("\n");
}

void quickSort(int list[], int lowerbound, int upperbound)
{
    int pivot, i, j;

    if (lowerbound < upperbound)
    {
        pivot = list[lowerbound];
        i = lowerbound + 1;
        j = upperbound;
        while (i <= j)
        {
            while ((i <= upperbound) && (list[i] < pivot))
            {
                i++;
            }
            while ((j >= lowerbound) && (list[j] > pivot))
            {
                j--;
            }
            if (i < j)
            {
                swap(list[i], list[j]);
            }
        }
        swap(list[lowerbound], list[j]);
        quickSort(list, lowerbound, j - 1);
        quickSort(list, j + 1, upperbound);
    }
    return;
}