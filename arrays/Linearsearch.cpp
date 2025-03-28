/*traverse the whole array and see iif element is present or not
find the element and print the index
else -1*/

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int num)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 7, 8, 9};
    int num = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = search(arr, n, num);
    cout << val << endl;
    return -1;
}
