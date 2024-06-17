#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> TwoSum(vector<int>& numbers,int target){
    //That solution take time compelxity of O(n) and take space complexity of O(1) in some cases
    // unordered_map<int,int> result;
    // for(int i=0; i<numbers.size(); i++){
    //     int complement = target-numbers[i];
    //     if(result.find(complement)!=result.end()){
    //         return {result[complement],i+1};
    //     }
    //     result[numbers[i]] = i+1; 
    // }
    // return {};


    //That solution take time compelxity of O(n) and take space complexity of O(1) {Efficient Solution}
    int left=0, right=numbers.size()-1;
    while (left<right)
    {
        if(numbers[left]+numbers[right]== target){ return {left+1,right+1};}
        else if(numbers[left]+numbers[right] < target){ left++;}
        else{ right--;}
    }
    return {};
}

int main(){
    vector<int> result={1,2,3,4,5};
    vector<int> output=TwoSum(result,3);
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
}