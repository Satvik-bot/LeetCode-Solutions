// Merge Two Sorted Lists
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
using namespace std;

class Solution {
public:
// Space: O(n), Time: O(n1+n2)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;

        ListNode* newHead = new ListNode();
        ListNode* temp = newHead;

        while(list1!=nullptr && list2!=nullptr) {
            if(list1->val > list2->val) {
                ListNode* d = new ListNode(list2->val);
                temp->next = d;
                list2 = list2->next;
                temp = temp->next;
            }
            else{
                ListNode* d = new ListNode(list1->val);
                temp->next = d;
                list1 = list1->next; 
                temp = temp->next;
            }
        }

        while(list1){
            ListNode* newNode = new ListNode(list1->val);
            temp->next = newNode;
            temp = temp->next;
            list1 = list1->next; 
        }

        while(list2){
            ListNode* newNode = new ListNode(list2->val);
            temp->next=newNode;
            temp = temp->next;
            list2 = list2->next; 
        }
    
    return newHead->next;
    }

// Space: O(1), Time: O(n1+n2)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;

        if(list1->val > list2->val) swap(list1,list2);
        ListNode *res = list1;

        while(list1!=nullptr && list2!=nullptr) {
            ListNode*temp = new ListNode();
            while(list1!=nullptr && list1->val <= list2->val) {
                temp = list1;
                list1=list1->next;
            }
            temp->next = list2;
            swap(list1,list2);
        }
          
    return res;
    }

};