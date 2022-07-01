#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
     Node* start = head;
        if(head==NULL) return NULL;
        while(head){
            Node* temp = new Node(head->val);
            temp->next = head->next;
            head->next = temp;
            head = temp->next;
        }
        head = start;
        while(head){
            if(head->random!=NULL){
                head->next->random = head->random->next;
            }
            else{
               head->next->random = NULL;
            }
            head = head->next->next;
        }
        head = start;
        Node* ans = head->next;
        Node* back = head;
        Node* front = head->next->next;
        if(front==NULL){
            back->next=NULL;
            return ans;
        }
        while(front){
            back->next->next = front->next;
            back->next = front;
            back = back->next;
            if(front->next->next==NULL){
                front->next = NULL;
                break;
            }
            front = front->next->next ;
        }
        return ans;  
    }
};