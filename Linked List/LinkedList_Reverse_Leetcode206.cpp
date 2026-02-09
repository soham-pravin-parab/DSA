
#include <iostream>
#include <vector> 
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next= prev;
            prev = curr;
            curr = next;
        }
        return prev;
}
};
