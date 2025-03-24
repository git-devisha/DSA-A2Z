#include <bits/stdc++.h>
using namespace std;
// divide and conquer algorithm
// it divides the array into two halves and then merge them in sorted order
// merge()- used to merge 2 havles of array, assumes both part are sorted
// mergeSort()- divides array into 2 parts, low to mid& mid+1 to high

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;      // left part of array
    int right = mid + 1; // right part of array
    // storing elements in temp array
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // elements on left half are still left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    cout << "before sorted: " << "/n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "after:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
    return 0;
}
// Time complexity: O(nlogn) for all cases
// Space complexity: O(n) for all cases