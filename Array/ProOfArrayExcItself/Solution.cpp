#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    vector<int> result(nums.size(),1);
    int prefix = 1;
    for(int i=0; i<nums.size(); i++){
        result[i] = prefix;
        prefix *= nums[i];
    }
    int postfix = 1;
    for(int i=nums.size() - 1; i>=0; i--){
        result[i] *= postfix;
        postfix *= nums[i];
    }
    return result;
}

int main(){
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> result = productExceptSelf(nums);
    for(int num : result){
        cout << num << " ";
    }
}