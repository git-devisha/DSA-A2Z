#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string output = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        string word = "";
        while (i < s.size() && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.size() > 0)
            output += " " + word;
    }
    return output.substr(1);
}
int main()
{
    string str = "Hello World";
    cout << reverseWords(str) << endl; // Output: "World Hello"
    return 0;
}