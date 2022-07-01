#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool static compare(vector<int>& b1,vector<int>& b2){
        return b1[1]>=b2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int count = 0;
        
            for(int i=0;i<boxTypes.size();i++){
                if(truckSize>=boxTypes[i][0]){
                    count+=boxTypes[i][0]*boxTypes[i][1];
                    truckSize-=boxTypes[i][0];
                }
                else if(truckSize>0){
                    count+=truckSize*boxTypes[i][1];
                    truckSize=0;
                }
                else{
                    break;
                }
            }
        
        return count;
    }
};