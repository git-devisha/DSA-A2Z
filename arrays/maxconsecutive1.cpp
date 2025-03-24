#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0, result = 0;

    for (int num : nums)
    {
        if (num == 1)
        {
            count++;
            result = max(result, count);
        }
        else
        {
            count = 0;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1};
    cout << "Max consecutive 1s: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
