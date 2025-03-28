#include <bits/stdc++.h>
using namespace std;

// Function to find union of two sorted arrays
vector<int> findunion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> Union;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (Union.empty() || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
        else
        { // If both elements are equal, add only once
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n)
    {
        if (Union.empty() || Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < m)
    {
        if (Union.empty() || Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 4, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result = findunion(arr1, arr2, n, m);

    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}
