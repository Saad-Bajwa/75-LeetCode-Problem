#include<iostream>
#include<vector>
using namespace std;
int searchArray(vector<int>& nums,int target){
    int l = 0, r=nums.size()-1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(nums[m] == target){
            return m;
        }
        if(nums[l] <= nums[m]){
            if(nums[l] <= target && target< nums[m]){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        else{
            if(nums[m] < target && target <= nums[r]){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {5,1,3};
    int val = searchArray(nums,3);
    if(val != -1){
        cout << "Index of that value is : " << val << endl;
    }
    else{
        cout << "Value doesnot found!!!" << endl;
    }
}