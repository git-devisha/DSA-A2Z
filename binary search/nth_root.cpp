#include <bits/stdc++.h>
using namespace std;
// return 1 ==m
// return 0 < m
// return 2 >m

int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int nth_root(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midn = func(mid, n, m);
        if (midn == 1)
            return mid;
        else if (midn == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // If no nth root is found
}

int main()
{
    int n = 3, m = 36;
    int ans = nth_root(n, m);
    cout << ans << endl; // Output the nth root
    return 0;
}