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

// My Approach time complexity O(n*n)

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

// better Approach Time complexity O(n)

    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        if(head==NULL) return NULL;
        ListNode* start = head;
        while(head){
            if(head->next==NULL){
               head->next = start;
               len++;
               break;
            }
                
            head = head->next;
            len++;
        }
        head = start;
        k = k%len;
        int n = len-k;
        while(--n){
           head = head->next;  
        }
        ListNode* ans = head->next;
        head->next = NULL;
        return ans;
        
    }

};