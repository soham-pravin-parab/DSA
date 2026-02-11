
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
    ListNode* detectCycle(ListNode* head){
        bool isCycle= false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL ){
            slow = slow -> next;
            fast = fast ->next->next;
            
            if(slow == fast){
                isCycle= true;
                break;
                
            }
        }
        if(!isCycle){
            return NULL;
        }
        slow = head ;
        ListNode* prev = NULL;
        while(slow != fast){
            slow = slow -> next ;
            prev = fast ;
            fast = fast -> next ;
        }
        prev -> next = NULL;
        return slow;
    }
};
ListNode* createCycleList() {
    ListNode* head = new ListNode(3);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(0);
    ListNode* node4 = new ListNode(-4);
    
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;  
    
    return head;
}

int main() {
    Solution sol;
    ListNode* head = createCycleList();
    ListNode* result = sol.detectCycle(head);
    cout << "Cycle starts at: " << result->val << endl;  
    return 0;
}