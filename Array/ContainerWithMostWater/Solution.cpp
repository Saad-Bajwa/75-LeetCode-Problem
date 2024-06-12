#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int>& height){
    int l=0,r=height.size()-1,res=0;
    while(l<r){
        int area = (r-l)*min(height[l],height[r]);
        res = max(res,area);
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return res;
}
int main(){
    vector<int> height = {1,8,3,4,6,7,8};
    cout << "The maximum area for water to be contain is : " << maxWater(height);
}

