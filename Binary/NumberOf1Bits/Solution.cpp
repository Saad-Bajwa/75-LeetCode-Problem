#include<iostream>
using namespace std;
int hammingWeight(int n){
    int res=0;
    // Not optimized solution little slower
    // while(n>0){
    //     res+=n%2;
    //     n>>=1;
    // }
    while(n!=0){
        n=n&(n-1);
        res++;
    }
    return res;
}
int main(){
    cout << "The number of 1 bits in the 7 is : " << hammingWeight(2147483645) << endl;
}