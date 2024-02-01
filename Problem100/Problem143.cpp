// Reorder List : Medium
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* reverseLL(ListNode* head) {
        ListNode* d = nullptr;
        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = d;
            d = head;
            head = next;
        }
        return d;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=nullptr && fast->next!=nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse slow->next
        ListNode* reverse = slow->next;
        slow->next = nullptr;
        reverse = reverseLL(reverse);

        ListNode*temp = head;
        bool flag=true;
        while (head != nullptr && reverse != nullptr) {
            ListNode* tmp1 = head->next;
            ListNode* tmp2 = reverse->next;
            head->next = reverse;
            reverse->next = tmp1;
            head = tmp1;
            reverse = tmp2;
        }
    }
};