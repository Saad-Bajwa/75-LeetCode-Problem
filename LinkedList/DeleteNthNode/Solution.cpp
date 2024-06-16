#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int val):val(val),next(nullptr){}
    ListNode(int val,ListNode* next):val(val),next(next){}
};

ListNode* DeleteNthNode(ListNode* head,int n){
    ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        for (int i = 0; i <= n; ++i) {
            if (fast == nullptr) {
                return head;
            }
            fast = fast->next;
        }
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* nodeToRemove = slow->next;
        if (nodeToRemove != nullptr) {
            slow->next = nodeToRemove->next;
            delete nodeToRemove;
        }
        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
}

int main(){

}