#include<iostream>
#include<vector>
using namespace std;
vector<int> countBits(int n){
    vector<int> result;
    for(int i=0; i<=n; i++){
        int res=0;
        int num = i;
        while(num!=0){
            num=num&(num-1);
            res++;
        }
        result.push_back(res);
    }
    return result;
}
int main(){
    vector<int>result = countBits(5);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
}