#include <bits/stdc++.h>
#define ll long long 
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>& target) {
        ll sum = 0;
        priority_queue<int> pq;
        for(int i=0;i<target.size();i++){
            sum+=target[i];
            pq.push(target[i]);
        }
        while(pq.top()>1){
            ll rem = sum - pq.top();
            if(rem>0){
                if(rem==0) return false;
                int quotient = pq.top()/rem;
                int value = pq.top() % rem;
                sum = sum - (quotient*pq.top()) ;
                if(rem==1) return true;
                if(rem > pq.top() || rem==0 || value==0) return false;
                pq.pop();
                pq.push(value);
            } 
        }
        return true;
    }
};