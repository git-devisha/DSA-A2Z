#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.length() != goal.length())
            return false;
        for (int i = 0; i < goal.length(); i++)
        {
            bool rotation = true;

            for (int j = 0; j < s.length(); j++)
            {
                // modulo for rotation operation
                if (goal[(i + j) % goal.length()] != s[j])
                {
                    rotation = false;
                    break;
                }
            }
            if (rotation)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    string str1 = "abcde", str2 = "cdeab";
    cout << s.rotateString(str1, str2) << endl; // Output: 1 (true)

    str1 = "abcde", str2 = "abced";
    cout << s.rotateString(str1, str2) << endl; // Output: 0 (false)

    return 0;
}