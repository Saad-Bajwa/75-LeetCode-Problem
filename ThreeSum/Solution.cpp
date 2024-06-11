#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    for(size_t i=0; i<nums.size(); ++i){
        if(i>0 && nums[i] == nums[i-1]) continue;
        int l=i+1,r=nums.size()-1;
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum==0){
                result.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1]) l++;
                while(l<r && nums[r]== nums[r-1]) r--;
                l++;
                r--;
            }
            else if(sum < 0) l++;
            else r--;
        }
    }
    return result;
}

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplets = threeSum(nums);
    
    for (const auto& triplet : triplets) {
        cout << '[';
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ',';
        }
        cout << ']' << endl;
    }
    
    return 0;
}