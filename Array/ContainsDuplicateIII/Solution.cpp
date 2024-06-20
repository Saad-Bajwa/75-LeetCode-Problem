#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool hasDuplicate(vector<int>&nums,int indexDiff,int valueDiff){
    if(valueDiff<0) return false;
    long bucketSize = static_cast<long>(valueDiff+1);
    unordered_map<long,long> bucket;
    for(int i=0; i<nums.size(); ++i){
        long num = static_cast<long>(nums[i]);
        long bucketId = num/bucketSize;
        if(num<0) bucketId--;
        if(bucket.count(bucketId)){
            return true;
        }
        if(bucket.count(bucketId-1) && abs(bucket[bucketId-1]-num) <= valueDiff){ return true;}
        if(bucket.count(bucketId+1) && abs(bucket[bucketId+1]-num) <= valueDiff){ return true;}
        bucket[bucketId] = num;
        if(i>=indexDiff){
            long oldNum = static_cast<long>(nums[i-indexDiff]);
            long oldBucketId = oldNum/bucketSize;
            if(oldNum<0) oldBucketId--;
            bucket.erase(oldBucketId);
        }
    }
    return false;
}

int main(){
    vector<int> nums= {1,2,3,4};
    if(hasDuplicate(nums,3,0)){
        cout << "Found" << endl;
    }
    else{
        cout << "Doesnot found" << endl;
    }
}

