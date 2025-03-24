#include <bits/stdc++.h>
using namespace std;
/*bruteforce approach:
Sort the array in ascending order.
Print the (size of the array -1)th index.*/
/*recursive approach:
create max variable arr[0]
use loop to compare it with other elements
any element is greater than the max value, update max value with the element’s value*/

int findlargest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findlargest(arr, n);
    return 0;
}