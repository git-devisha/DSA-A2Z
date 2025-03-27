#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxIndex = LLONG_MIN; // Correct initialization
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // Correct update of maxIndex
        maxIndex = max(maxIndex, sum);

        // Reset sum if it goes negative
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxIndex;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxsum = maxSubarraySum(arr, n);
    cout << "Max sum of subarray is: " << maxsum << endl;
    return 0;
}
