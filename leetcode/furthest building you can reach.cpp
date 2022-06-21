#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:

    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        ll n=heights.size();
        priority_queue<int>pq;
        for(ll i=0;i<n;i++){
             if(heights[i+1]>heights[i]){
                 pq.push(heights[i+1]-heights[i]);
                 bricks-=heights[i+1]-heights[i];
                 if(bricks>0){
                     continue;
                 }
                 ladders--;
                 bricks+=pq.top();
                 pq.pop();
                    if(ladders<0){
                        return i;
                    }
             }
        }
        return n-1;
        
    }
};