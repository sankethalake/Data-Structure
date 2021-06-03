#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
    return 0;
}