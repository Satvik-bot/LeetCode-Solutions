// Remove Nth Node From End of List
#include <iostream>
using namespace std;

class Solution {
public:
    // Complexity: O(2n)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        
        // calculate length of list 's'
        int s=0;
        while(temp!=nullptr) {
            s++;
            temp = temp->next;
        }
        delete(temp);

        // check if node to be removed is head
        if(n==s) {
            ListNode* node=head;
            head = head->next;
            delete(node);
            return head;
        }

        // # of times to shift newNode to position (s-n)
        int time = (s-n);
        ListNode* newNode = head;
        time--;

        while(time--){
            newNode=newNode->next;
        }
        
        // Finally, next=next->next and remove the middle node
        ListNode* toBeDeleted = newNode->next;
        newNode->next = newNode->next->next;
        delete(toBeDeleted);
        return head;
    }

    // Complexity: O(n)
    ListNode* removeNthFromEndFast(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start->next = head;
        
        ListNode* fast = start;
        ListNode* slow = start;

        while(n--) {
            fast = fast->next;
        }

        while(fast->next!=nullptr) {
            fast=fast->next;
            slow=slow->next;
        }

        ListNode* toBeDeleted = slow->next;
        slow->next = slow->next->next;
        delete(toBeDeleted);

        return start->next;
    }
};