#include<iostream>
using namespace std;
int sumWithoutOperator(int a, int b){
    while (b!=0)
    {
        int x=a^b;
        int c=(a&b)<<1;
        a=x,b=c;
    }
    return a;
}

int main(){
    cout << "Sum of the two number is : " << sumWithoutOperator(100,100) << endl;
    cout << "Sum of the two number is : " << sumWithoutOperator(99,106) << endl;
    cout << "Sum of the two number is : " << sumWithoutOperator(100,130) << endl;
}