#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSubArray(vector<int>& nums){
    int maxSub = nums[0];
    int curSum = 0;
    for(int num: nums){
        if(curSum < 0){
            curSum = 0;
        }
        curSum += num;
        maxSub = max(maxSub,curSum);
    }
    return maxSub;
}

int main(){
    vector<int> nums = {5,4,-1,7,8};
    cout << "Maximum Sum of SubArray is : " << maxSubArray(nums);

}