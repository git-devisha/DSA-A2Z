#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int count(vector<int> &arr, int target)
{
    auto lower = lower_bound(arr.begin(), arr.end(), target);
    auto upper = upper_bound(arr.begin(), arr.end(), target);
    return upper - lower;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8};
    int target = 4;
    int ans = count(arr, target);
    cout << ans << endl;
    return ans;
}
