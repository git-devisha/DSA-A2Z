#include <bits/stdc++.h>
using namespace std;
// selection element in each iteration in unsorted array
// “inner while loop” basically shifts the elements using swapping
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "sorted array: " << "\n";
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
    cout << "original array: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    insertion_sort(arr, n);
    return 0;
}