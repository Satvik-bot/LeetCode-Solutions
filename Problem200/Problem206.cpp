// Reverse Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * d = nullptr; // previous node
        while(head!=nullptr) {
            // saving the next node
            ListNode * next = head->next;
            // breaking the old connection to make the reverse connection
            head->next = d;
            // moving d and head to move forward and continue.
            d=head;
            head=next;
        }
        return d;
    }
};