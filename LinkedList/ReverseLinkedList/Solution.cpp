#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int val):val(val),next(nullptr){}
    ListNode(int val, ListNode* next):val(val),next(next){}
};

ListNode* ReverseList(ListNode* head){
    ListNode* p=nullptr,*q=head;
    while(q!=nullptr){
        ListNode* nxt = q->next;
        q->next=p;
        p=q;
        q=nxt;
    }
    return p;
}

void Print(ListNode* head){
    ListNode* p = head;
    while(p!=nullptr){
        cout << p->val << "->";
        p=p->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = new ListNode(0);
    ListNode* p= head;
    for(int i=0; i<5; i++){
        ListNode * newNode = new ListNode(i+1);
        p->next = newNode;
        p=newNode;
    }
    Print(head);
    cout << "\n\n<------------Reverse List----------------->" << endl;
    Print(ReverseList(head));
}