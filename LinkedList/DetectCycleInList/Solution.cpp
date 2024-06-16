#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){ }
    ListNode(int val):val(val),next(nullptr){ }
    ListNode(int val,ListNode* next):val(val),next(next){}
};

bool hasCycle(ListNode* head){
    ListNode* slow=head,*fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){ return true;}
    }
    return false;
}


int main(){
    
}