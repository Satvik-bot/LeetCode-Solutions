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
        ListNode * d = nullptr;
        while(head!=nullptr) {
            ListNode * next = head->next;
            head->next = d;
            d=head;
            head=next;
        }
        return d;
    }
};