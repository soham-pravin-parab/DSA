
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL&& fast -> next != NULL){
            slow = slow ->next;
            fast = fast->next->next;
            
        }
        return slow;
    }
};
int main() {
    
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    Solution sol;
    ListNode* mid = sol.middleNode(head);
    cout << "Middle node value: " << mid->val << endl; 
    return 0;
}