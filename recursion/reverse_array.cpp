#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void f(int i, vector<int> &arr, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    f(i + 1, arr, n);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4}; // example array; replace or read input as needed
    int n = arr.size();
    f(0, arr, n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
}