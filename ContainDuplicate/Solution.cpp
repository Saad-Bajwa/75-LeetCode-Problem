#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums){
    // First Solution --Not efficient
    // unordered_map<int,int> duplicateChecker;
    // for(int i=0; i<nums.size(); i++){
    //     if(duplicateChecker.find(nums[i]) != duplicateChecker.end()){
    //         return true;
    //     }
    //     duplicateChecker[nums[i]] = i;
    // }
    // return false;
    // Second Solution --Efficient
    unordered_set<int> seen;
    for(int num : nums){
        if(seen.find(num) != seen.end()){
            return true;
        }
        seen.insert(num);
    }
    return true;
}

int main(){
    vector<int> nums = {1,1,1,4};
    if(containsDuplicate(nums)){
        cout << "Array contains duplicate" << endl;
    }
    else{
        cout << "Array dont contains duplicate" << endl;
    }
}
