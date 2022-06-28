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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start = head;
        ListNode* prev = head;
        if(head==NULL) return NULL;
        int count=0;
        while(head){
            count++;
            head = head->next;
        }
        head = start;
        k=k%count;
        while(k--){
            while(head->next){
                prev = head;
                head = head->next;
            }
            prev->next=NULL;
            head->next = start;
            start=head;
            
        }
        return start;
    }
};