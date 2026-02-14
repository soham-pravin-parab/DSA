
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = NULL) : val(x), next(n) {}
};
class Solution {
public:
    ListNode* mergeTwoList(ListNode* head1,ListNode* head2){
        if(head1==NULL||head2==NULL){
            return head1 == NULL ? head2:head1;
        }
        if(head1->val<=head2->val){
            head1-> next =mergeTwoList(head1->next,head2);
            return head1;
        } else{
            head2-> next = mergeTwoList(head1,head2->next);
            return head2;
            
        } 
        
        
    }
    
};
int main() {
    Solution sol;
    
    ListNode n1(1), n2(2), n3(4);
    n1.next = &n2; n2.next = &n3;
    
    ListNode m1(1), m2(3), m3(4);
    m1.next = &m2; m2.next = &m3;
    
    ListNode* merged = sol.mergeTwoList(&n1, &m1);
    
    
    for (ListNode* p = merged; p != NULL; p = p->next) {
        cout << p->val << " ";
    }
    cout << endl;
    return 0;
}