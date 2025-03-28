#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int low, int high, int mid)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int count = 0;

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
            count += (mid - left + 1); // Count inversion pairs
            right++;
        }
    }

    // Copy remaining elements of left subarray
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right subarray
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back the sorted elements into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return count;
}

int mergesort(vector<int> &arr, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;

    int mid = (low + high) / 2;
    count += mergesort(arr, low, mid);
    count += mergesort(arr, mid + 1, high);
    count += merge(arr, low, high, mid);

    return count;
}

int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};
    int n = arr.size();
    int inversionCount = mergesort(arr, 0, n - 1);

    cout << "Number of inversion pairs: " << inversionCount << endl;

    return 0;
}
