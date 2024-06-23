#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int rob(vector<int> &nums)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = max(sum1 + nums[i], sum2);
        sum1 = sum2;
        sum2 = temp;
    }
    return sum2;
}

int main()
{
    vector<int> nums = {1};
    cout << "The maximum amount to be robbed is : " << rob(nums) << endl;
}