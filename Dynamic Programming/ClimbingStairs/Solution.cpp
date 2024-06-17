#include<iostream>
#include<vector>
using namespace std;
//Recursion way
int fn(int n,vector<int>& dp){
    if(n==1||n==2){ return n;}
    if(dp[n]!=-1){ return dp[n];}
    return dp[n] = fn(n-1,dp) + fn(n-2,dp);
}

int Ways(int n){
    // BAck tracing using two pointers
    // int one=1,two=1;
    // for(int i=0; i<n-1; i++){
    //     int temp=one;
    //     one = one+two;
    //     two=temp;
    // }
    // return one;
    vector<int> dp(n+1,-1);
    return fn(n,dp);
}

int main(){
    cout << "Number of ways for the climibing stairs is : " << Ways(6) << endl;
}