#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool wordBreak(string s,vector<string> wordDict){
    vector<bool> dp(s.length(),false);
    dp[s.length()]=true;
    for(int i=s.length()-1;i>=0; i--){
        for(string w : wordDict){
            if(i+w.length() <= s.length() && s.substr(i,w.length())== w){
                dp[i]= dp[i+w.length()];
            }
            if(dp[i]){
                break;
            }
        }
    }
    return dp[0];
}

int main(){
    cout << "Word segments exist or not : " << wordBreak("leetcode",{"leet","code"});
}