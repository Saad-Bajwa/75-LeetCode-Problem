#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
using namespace std;
bool hasDuplicate(vector<int>& nums, int k){
    unordered_map<int,int> result;
    for(int i=0; i<nums.size(); i++){
        int complement = nums[i];
        if(result.find(complement)!=result.end() && abs(result[complement]-i)<=k){
            return true;
        }
        result[complement] = i;
    }
    return false;
}

int main(){
    vector<int> nums={1,2,3,1};
    if(hasDuplicate(nums,3)){
        cout << "Found" << endl;
    }
    else{
        cout << "NOt found" << endl;
    }
}