#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) // create empty array and define data type
{
    for (int i = 0; i < n - 1; i++)
    { // outer loop
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        { // inner loop
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index]; // temprory store minimum index
        arr[min_index] = arr[i];
        arr[i] = temp; // swap the minimum index with the first element
    }
    cout << "sorted array" << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "\n";
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original array: " << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
    selection_sort(arr, n);
    return 0;
}