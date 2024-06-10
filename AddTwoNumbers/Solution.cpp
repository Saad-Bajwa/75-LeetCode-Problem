#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int data): val(data), next(nullptr){}
    ListNode(int data, ListNode* next): val(data), next(next){}
};

class Solution{
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
            ListNode dummy(0);
            ListNode* l3 = &dummy;
            int carry = 0;
            while(l1!=nullptr || l2!= nullptr || carry){
                int sum = carry;
                if(l1 != nullptr){
                    sum += l1->val;
                    l1 = l1->next;
                }
                if(l2!=nullptr){
                    sum+= l2->val;
                    l2 = l2->next;
                }
                carry = sum/10;
                l3->next = new ListNode(sum%10);
                l3 = l3->next;
            }
            return dummy.next;
        }
};

int main(){
// Create linked list l1: 9 -> 9 -> 9 -> 9 -> 9 -> 9 -> 9
    ListNode* l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    l1->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next->next = new ListNode(9);
    
    // Create linked list l2: 9 -> 9 -> 9 -> 9
    ListNode* l2 = new ListNode(9);
    l2->next = new ListNode(9);
    l2->next->next = new ListNode(9);
    l2->next->next->next = new ListNode(9);
    
    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    // Print the solution
    while(result!=nullptr){
        cout << result->val << " ->";
        result = result->next;
    }
}