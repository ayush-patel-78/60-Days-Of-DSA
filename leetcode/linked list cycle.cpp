#include <bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 }; 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>mpp;
        if(head==NULL) return false;
        while(mpp.find(head)==mpp.end()){
            mpp.insert(head);
            if(head->next==NULL){
                return false;
            }
            head=head->next;
        }
        return true;
    }
};