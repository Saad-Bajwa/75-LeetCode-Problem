#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int val): val(val),next(nullptr){}
    ListNode(int val, ListNode* next):val(val),next(next){}
};

ListNode* MergeSortedList(ListNode* list1,ListNode* list2){
    if(list1==nullptr){ return list2;}
    if(list2==nullptr){ return list1;}
    ListNode* clone = new ListNode(0);
    ListNode* tail = clone;
    while(list1&&list2){
        if(list1->val<list2->val){ tail->next=list1; list1=list1->next;}
        else{ tail->next=list2;list2=list2->next;}
        tail=tail->next;
    }
    if(list1!=nullptr){ tail->next=list1;}
    else{ tail->next=list2;}
    return clone->next;
}


int main(){

}