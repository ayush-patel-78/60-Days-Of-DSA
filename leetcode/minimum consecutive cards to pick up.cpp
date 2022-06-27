#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> mpp;
        int min = INT_MAX;
        bool isMin = false;
        for(int i=0;i<cards.size();i++){
            if(mpp.find(cards[i])==mpp.end()){
                mpp[cards[i]]=i;
            }
            else{
                if(i-mpp[cards[i]]<=min){
                    min = i-mpp[cards[i]];
                    mpp[cards[i]]=i;
                    isMin=true;
                }
                else{
                    mpp[cards[i]]=i;
                }
            }
        }
        if(isMin) return min+1;
        return -1;
        
        
    }
};