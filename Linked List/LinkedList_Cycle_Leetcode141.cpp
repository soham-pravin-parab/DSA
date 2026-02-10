
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
    bool hasCycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL ){
            slow = slow -> next;
            fast = fast ->next->next;
            
            if(slow == fast){
                return true;
                
            }
        }
        return false;
    }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = head->next;  
    
    Solution sol;
    cout << boolalpha << sol.hasCycle(head) << endl;  
    return 0;
}