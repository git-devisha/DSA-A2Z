// sum of first n numbers
// PARAMETERIZED RECURSION
#include <bits/stdc++.h>
using namespace std;

void f(int i, int sum = 0)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}
int main()
{
    int n = 90;
    f(n, 0);
}

// functional recursion
long long f(int n)
{
    if (n <= 0)
        return 0;
    return (long long)n + f(n - 1);
}
int main()
{
    int n = 90;
    cout << f(n) << endl;
    return 0;
}