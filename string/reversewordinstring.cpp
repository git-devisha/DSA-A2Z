#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseword(string s)
    {
        string output = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            string word = " ";
            while (i < s.size() && s[i] != ' ')
            {
                word += s[i];
                i++;
            };
            reverse(word.begin(), word.end());
            if (word.size() > 0)
                output += " " + word;
        }
        return output;
    }
};

int main()
{
    Solution s;
    string str = "Hello World";
    cout << s.reverseword(str) << endl; // Output: "World Hello"
    return 0;
}