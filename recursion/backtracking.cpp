#include <bits/stdc++.h>
using namespace std;

// f(i+1, n) is not used in bakctracking, so we can use f(i-1, n)
void f(int i, int n)
{
    if (i < 1)
        return;
    f(i - 1, n);
    cout << i << endl;
}
int main()
{
    int n = 6;
    f(n, n);
    return 0;
}

// print n...1 with backtracking
void f(int i, int n)
{
    if (i > n)
        return;
    f(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n = 6;
    f(1, n);
    return 0;
}