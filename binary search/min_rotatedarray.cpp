// binary search algo reduces the search soace by half
/*
identify the sorted array
see if the target is in sorted half:
if not eliminate that half
if target exists then eliminate the other half
find sorted half:
arr[low]<=arr[mid]  - left half is sprted
arr[mid]<= arr[high]  -  right half is sorted
*/

#include <bits/stdc++.h>
using namespace std;

int Minsorted(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1; // eliminate left half
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1; // eliminate right half
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2};
    cout << Minsorted(arr) << endl;
    return 0;
}