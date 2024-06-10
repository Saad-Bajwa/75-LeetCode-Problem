#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    // vector<int> result;
    // for(auto it1 = nums.begin(); it1 != nums.end();++it1){
    //     auto it2 = find(it1+1,nums.end(),target - *it1);
    //     if(it2!=nums.end()){
    //         result.push_back(it1-nums.begin());
    //         result.push_back(it2-nums.begin());
    //         break;
    //     }
    // }
    // return result;
    unordered_map<int,int> result;
    for(int i=0; i<nums.size(); ++i){
        int complement = target - nums[i];
        if(result.find(complement) != result.end()){
            return {result[complement],i};
        }
        result[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {3,12,4,2,9};
    int target = 11;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
}