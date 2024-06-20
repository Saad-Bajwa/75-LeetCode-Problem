#include<iostream>
#include<vector>
using namespace std;

int coinChange(vector<int>&coins,int target){
    vector<int> dp(target+1,target+1);
    dp[0]=0;
    for(int i=1; i<=target; i++){
        for(int coin:coins){
            if(i-coin>=0){
                dp[i] = min(dp[i],1+dp[i-coin]);
            }
        }
    }
    return dp[target]!=target+1?dp[target]:-1;
}

int main(){
    vector<int> coins = {1,3,4,5};
    cout << "The minimum path to target is : " << coinChange(coins,104);
}