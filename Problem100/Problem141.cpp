// Linked List Cycle

#include <iostream>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_map<int,int> m;

        // ListNode* tmp = head;
        ListNode* n1 = head;
        ListNode* n2 = head;

        while(n1 && n2->next) {
            n1=n1->next;
            n2=n2->next->next;
            if(n1==n2) return true;
            if(n2==nullptr or n2->next==nullptr) {
                return false;
            }
        }
        return false;
    }
};