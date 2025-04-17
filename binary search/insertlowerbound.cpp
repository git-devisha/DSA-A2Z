#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) // for upper bound arr[mid] > x
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 7, 2, 12, 10};
    int n = arr.size();
    int x = 3;
    cout << lowerbound(arr, n, x) << endl;
    return 0;
}