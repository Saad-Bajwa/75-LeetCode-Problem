#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        double maxPro = nums[0];
        double currMin = nums[0], currMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(currMin, currMax);
            }

            currMax = max((double)nums[i], nums[i] * currMax);
            currMin = min((double)nums[i], nums[i] * currMin);

            maxPro = max(maxPro, currMax);
        }

        return static_cast<int>(maxPro); 
    }

int main(){
    vector<int> nums = {0,10,10,10,10,10,10,10,10,10,-10,10,10,10,10,10,10,10,10,10,0};
    cout << "Maximum Product of SubArray is : " << maxProduct(nums);

}