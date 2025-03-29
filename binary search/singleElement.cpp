#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (mid % 2 == 1)
            {
                mid--;
            }
            // valid pair move right
            if (nums[mid] == nums[mid + 1])
            {
                left = mid + 2;
            }
            else
                right = mid;
        }
        return nums[left];
    }
};

int main(){
    vector<int> nums= {1,2,2,3,4,5,6,7,7,8,8,9,9};
    Solution sol;
    int result = sol.singleNonDuplicate(nums);
    cout << "The single non-duplicate element is: " << result << endl;
    return 0;
}