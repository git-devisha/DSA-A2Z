#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        int mapst[256], mapts[256]; // ascii characters
        fill(begin(mapst), end(mapst), -1);
        fill(begin(mapts), end(mapts), -1);
        for (int i = 0; i < s.length(); i++)
        {
            char cs = s[i], ct = t[i];

            if (mapst[cs] == -1 && mapts[ct] == -1)
            {
                mapst[cs] = ct;
                mapts[ct] = cs;
            }
            else
            {
                if (mapst[cs] != ct || mapts[ct] != cs)
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    string str1 = "egg", str2 = "add";
    cout << s.isIsomorphic(str1, str2) << endl; // Output: 1 (true)

    str1 = "foo", str2 = "bar";
    cout << s.isIsomorphic(str1, str2) << endl; // Output: 0 (false)

    str1 = "paper", str2 = "title";
    cout << s.isIsomorphic(str1, str2) << endl; // Output: 1 (true)
}