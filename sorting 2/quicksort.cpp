#include <bits/stdc++.h>
using namespace std;
// divide and conquer algo
/* pivot= first element, last element, median of array, random
pivot= arr[low] */
// place the pivot at correct position in sorted array, it will act as partition
// elements smaller than pivot are placed on left side of pivot
// elements greater than pivot are placed on right side of pivot
// 1st array= (low, partition-1), 2nd array= (partition+1, high)
/* i=low, j=high
if (i<j) swap(arr[i], arr[j]) */
// better than merge sort because it takes less space, uses auxillary stack

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        while (arr[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]); // Correctly placing pivot
    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }
}

int main()
{
    int arr[] = {8, 4, 7, 3, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    quicksort(arr, 0, n - 1);

    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}