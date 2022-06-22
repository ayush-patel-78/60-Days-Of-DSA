#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        ListNode* start = new ListNode();
        start = head;
        while(head){
            while(head->val == val && head->next!=NULL){
                if(head->next!=NULL){
                    head->val = head->next->val;
                    head->next = head->next->next;
                }
                
            }
           
            head = head->next;
        }
        head=start;
        while(head){
            if(head->next!=NULL && head->next->val==val && head->next->next==NULL){
                head->next=NULL;
            }
            head=head->next;
        }
        if(start->val==val){
            return NULL;
        }
        return start;
    }
};