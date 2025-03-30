#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int findMin(vector<int> &arr)
{
    return *min_element(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 1, 2};
    int ans = findMin(arr);
    cout << ans << endl;
    return 0;
}