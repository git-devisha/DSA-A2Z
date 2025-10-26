#include <bits/stdc++.h>
using namespace std;

bool f(const string &s, int i)
{
    int n = s.length();
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    return f(s, i + 1);
}
int main()
{
    string s = "racecar";
    int n = s.length();
    if (f(s, 0))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}