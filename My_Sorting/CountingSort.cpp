#include <bits/stdc++.h>
using namespace std;

void printFunction(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << ("\n") << endl;
}

void sorting(int arr[], int size)
{
    int maximum = -1;
    for (int i = 0; i < size; i++)
    {
        maximum = max(arr[i], maximum);
    }

    int count[maximum + 1];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= maximum; i++)
    {
        count[i] += count[i - 1];
    }

    int sortedArray[size];
    for (int i = 0; i < size; i++)
    {
        sortedArray[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << sortedArray[i] << ", ";
    }
}

int main()
{
    int array[] = {2, 4, 5, 2, 9, 5, 6, 1, 4, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "**** Before sorting****" << endl;
    printFunction(array, 10);
    cout << "**** after sorting****" << endl;
    sorting(array, size);
    return 0;
}
