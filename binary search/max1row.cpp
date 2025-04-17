
#include <bits/stdc++.h>
using namespace std;

int rowMax1(vector<vector<int>> &matrix, int n, int m)
{
    int countmax = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0;
        for (int j = 0; j < m; j++)
        {
            count1 += matrix[i][j];
        }
        if (count1 > countmax)
        {
            countmax = count1;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>> matrix = {{0, 0, 0}, {1, 0, 1}, {1, 0, 1}};
    int n = 3, m = 3;
    cout << "the row with maximum 1s is: " << rowMax1(matrix, n, m) << endl;
    return 0;
}