
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
    bool detectCycle(ListNode* head){
        bool isCycle;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL ){
            slow = slow -> next;
            fast = fast ->next->next;
            
            if(slow == fast){
               int isCycle= true;
                break;
                
            }
        }
        if(!isCycle){
            return NULL;
        }
        slow = head ;
        while(slow != fast){
            slow = slow -> next ;
            fast = fast -> next ;
        }
        return slow;
    }
};
int main()
{
    
    return 0;
}