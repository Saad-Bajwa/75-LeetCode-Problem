#include<iostream>
#include <cstdint>
using namespace std;
uint32_t reverseBit(uint32_t n){
    uint32_t res =0;
    for(int i=0; i<32; i++){
        uint32_t bit = (n>>i)&1;
        res |= (bit << (31-i));
    }
    return res;
}

int main(){
    uint32_t 356784;
}