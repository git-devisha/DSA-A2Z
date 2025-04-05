#include <bits/stdc++.h>
using namespace std;

class floydwarshall
{
public:
    void shortestdist(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == -1)
                {
                    matrix[i][j] = 1e9;
                }
                if (i == j)
                    matrix[i][j] = 0;
            }
        }
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 1e9)
                {
                    matrix[i][j] = -1;
                }
            }
        }
    }
};

int main()
{
    int v = 4;
    vector<vector<int>> matrix(v, vector<int>(v, -1));
    matrix[0][1] = 2;
    matrix[1][0] = 1;
    matrix[1][2] = 3;
    matrix[3][0] = 3;
    matrix[3][1] = 5;
    matrix[3][2] = 4;
    floydwarshall obj;
    obj.shortestdist(matrix);

    for (auto row : matrix)
    {
        for (auto cell : row)
        {
            cout << cell << " ";
        }
        cout << endl;
    }
    return 0;
}