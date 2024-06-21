#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int LongestIncreasingSubsequence(vector<int>& nums){
    vector<int> dp(nums.size(),1);
    for(int i=nums.size()-1; i>=0; i--){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]<nums[j]){
                dp[i] = max(dp[i],1+dp[j]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}

int main(){
    vector<int> nums={0,1,0,3,2,3};
    cout << "The longest increasing subsequent in the array is : " << LongestIncreasingSubsequence(nums)<< endl;
}