#include <bits/stdc++.h>
using namespace std;
//  * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previousNode;
        ListNode* nextNode;
        while(head){
            nextNode=head->next;
            head->next=previousNode;
            previousNode=head;
            head=nextNode;
            
        }
        return previousNode;
    }
};