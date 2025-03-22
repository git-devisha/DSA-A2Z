#include <bits/stdc++.h>
using namespace std;
// iterative method : if arr[i]> arr[i+1]
// recursive approach: select range , swap(arr[i],arr[i+1])
// if arr[j]>arr[j+1], here the max elemeent of unsorted array
// recursion again decreasing the range by 1, bas case: if(n==1) return
void bubble_sort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    // range reduced after recursion
    bubble_sort(arr, n - 1);
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "before: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubble_sort(arr, n);
    cout << "after: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
