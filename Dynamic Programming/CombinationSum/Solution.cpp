#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int CombinationSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<unsigned long long> dp(target + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= target; i++)
    {
        for (auto num : nums)
        {
            if (num > i)
            {
                break;
            }
            dp[i] += dp[i - num];
        }
    }
    return dp[target];
}


int main()
{
    vector<int> nums = {1};
    cout << "The combination is : " << CombinationSum(nums, 4) << endl;
}