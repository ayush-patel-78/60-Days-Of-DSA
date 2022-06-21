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

 // My Approach: space complexity O(n1+n2)

    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     vector<ListNode*>v;
    //     if(list1==NULL && list2==NULL){
    //         return NULL;
    //     }
    //     while(list1 && list2){
    //         if(list1->val < list2->val){
    //             v.push_back(list1);
    //             list1=list1->next;
    //         }
    //         else{
    //             v.push_back(list2);
    //             list2=list2->next;
    //         }
    //     }
    //     while(list1){
    //         v.push_back(list1);
    //         list1=list1->next;
    //     }
    //     while(list2){
    //         v.push_back(list2);
    //         list2=list2->next;
    //     }
    //     ListNode* head=v[0];
    //     for(int i=1;i<v.size();i++){
    //         v[i-1]->next=v[i];
    //     }
    //     return head;
    // }

// optimal solution : space complexity O(1)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL ){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->val>list2->val){
            ListNode* temp=list1;
            list1=list2;
            list2=temp;
        }
        ListNode* head=list1;
        while (list1 && list2) {
            ListNode* temp=NULL;
            while(list1 && list1->val<=list2->val){
                temp=list1;
                list1=list1->next;
            }
            temp->next=list2;
            //swap
            ListNode* temp2=list2;
            list2=list1;
            list1=temp2;
        }
        return head; 
    }
 
};