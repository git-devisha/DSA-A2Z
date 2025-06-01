#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size(); // 2D array matrix
        int low = 0;
        int high = m - 1;
        int mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            int maxrow = 0;
            for (int i = 0; i < n; ++i)
            {
                if (matrix[maxrow][mid] < matrix[i][mid])
                    maxrow = i;
            }
            if ((mid == 0 || matrix[maxrow][mid] > matrix[maxrow][mid - 1]) &&
                (mid == m - 1 || matrix[maxrow][mid] > matrix[maxrow][mid + 1]))
                return {maxrow, mid};

            else if (mid > 0 && matrix[maxrow][mid - 1] > matrix[maxrow][mid])
                high = mid - 1;

            else
                low = mid + 1;
        }
        return {-1, 1};
    }
};

int main()
{
    // Example usage
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {6, 5, 4},
        {7, 8, 9}};
    vector<int> peak = sol.findPeakGrid(matrix);
    cout << "Peak found at: (" << peak[0] << ", " << peak[1] << ")" << endl;
    return 0;
}