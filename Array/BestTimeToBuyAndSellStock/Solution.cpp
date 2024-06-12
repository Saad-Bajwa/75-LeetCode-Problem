#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxProfit(vector<int> prices){
    if(prices.empty()){
        return 0;
    }
    int minProfit = INT_MAX, maxProfit = 0, profit;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < minProfit){
            minProfit = prices[i];
        }
        profit = prices[i] - minProfit;
        if(profit > maxProfit){
            maxProfit = profit;
        }
    }
    return maxProfit;
}
int main(){
    vector<int> prices = {7,6,4,3,1};
    cout << "The maximum profit from {7,6,4,3,1} is : " << maxProfit(prices) << endl;
}