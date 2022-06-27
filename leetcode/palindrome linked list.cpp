#include <bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // step 1: find  middle of linked list
        ListNode* middle = findMiddle(head);
        // step 2: reverse right side Linked list
        middle->next = reverseList(middle->next);
        middle = middle->next;
        // step 3: checkPalindrome
        while(middle!=NULL){
            if(head->val != middle->val){
                return false;
            }
            middle = middle->next;
            head = head->next;
        }
        return true;
    }
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* nextNode = NULL;
        while(head){
            nextNode = head->next;
            head->next=prev;
            prev = head;
            head=nextNode;
        }
        return prev;
    }
};