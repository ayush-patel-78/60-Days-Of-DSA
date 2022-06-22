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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // 1st approach 
        // step 1 traverse both the linked list and store all addresses in the 2 vectors separately and after storing iterate on both the vector from reverse .
        // step 2 create ListNode* prev pointer which will pointing to the prev address while iterating on a vector from last
        // step 3 compare the address of both the list if address from last is same then do nothing decrement i and j and if both the address are not equal then return prev pointer;
        
        // vector<ListNode *> v1;
        // vector<ListNode *>v2;
        // ListNode *temp1 = headA;
        // ListNode *temp2 = headB;
        // v1.push_back(headA);
        // v2.push_back(headB);
        // while(temp1->next!=NULL){
        //     v1.push_back(temp1->next);
        //     temp1=temp1->next;   
        // }
        // while(temp2->next!=NULL){
        //     v2.push_back(temp2->next);
        //     temp2=temp2->next;
        // }
        // ListNode *prev=NULL;
        // for(int i=v1.size()-1,j=v2.size()-1;i>=0 && j>=0;i--,j--){
        //     if((v1[i])==(v2[j])){
        //         prev=v1[i];
        //         continue;
        //     }
        //     return prev;
        // }
        // return prev;
        
        
        // 2nd approach
        
    
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        //
        // Any time they collide or reach end together without colliding 
        // then return any one of the pointers.
        //
        if (p1 == p2) return p1;

        //
        // If one of them reaches the end earlier then reuse it 
        // by moving it to the beginning of other list.
        // Once both of them go through reassigning, 
        // they will be equidistant from the collision point.
        //
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
    }
};

