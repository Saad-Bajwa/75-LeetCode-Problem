#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
    // First solution
    // int res=nums.size();
    // for(int i=0; i<nums.size(); i++){
    //     res += (i-nums[i]);
    // }
    // return res;
    //Second Solution
    int xor1=0,xor2=0;
    for(int i=0; i<=nums.size(); i++){ xor1 ^= i;}
    for(int i=0; i<nums.size(); i++){xor2^=nums[i];}
    return xor1^xor2;
}

int main(){
    vector<int> nums = {9,6,4,2,3,8,7,0,1};
    cout << "The missing number is : " << missingNumber(nums);
}
