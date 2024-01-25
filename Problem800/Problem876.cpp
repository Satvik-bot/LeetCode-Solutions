// Middle of the Linked List
#include <iostream>
using namespace std;

class Solution {
public:
    //Complexity: O(n)+O(n/2)
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode * traverseNode = head;
        
        while(traverseNode!=nullptr) {
            traverseNode=traverseNode->next;
            size++;
        }

        traverseNode = head;
        for(int i=0; i<size/2; i++) {
            traverseNode = traverseNode->next;
        }

        return traverseNode;
    }

    //Complexity: O(n/2);
    ListNode* middleNodeFast(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!=nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};