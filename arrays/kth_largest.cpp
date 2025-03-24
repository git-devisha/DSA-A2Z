#include <bits/stdc++.h>
using namespace std;
/*bruteforce approach(when no duplicates):
sort array in ascending order
The element present at kth index from the END is the kth largest element
*/

/*better approach:
Find the smallest and largest element in the array in a single traversal
again traverse the array and find an element that is k greater than the smallest element we just found.
find the largest element which is k smaller than the largest element we just found*/
/*Optimal approach:
If the current element is k larger than ‘large’ then update kth_largest variables
Else if the current element is k larger than kth_largest then we update the variable kth_largest.
Once we traverse the entire array, we would find the kth largest element in the variable kth_largest.*/

int kth_largest(int arr[], int n, int k)
{
    if (k > n)
        return -1; // If k is larger than array size, return -1
    sort(arr, arr + n, greater<int>()); // Sort in descending order
    return arr[k - 1]; // Return the k-th largest element
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =3;
    cout << kth_largest(arr, k, n);
    return 0;
}