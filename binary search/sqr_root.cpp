#include <bits/stdc++.h>
using namespace std;

int sqrroot(int n)
{
    int low = 1, high = n, ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = mid * mid;
        if (value <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 10;
    cout << sqrroot(n);
    return 0;
}