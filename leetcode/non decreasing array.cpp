#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int pos = -1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(pos!=-1){
                    return false;
                }
                pos = i;
            }
        }
        return pos==-1 || pos==nums.size()-2 || pos==0 || nums[pos-1]<=nums[pos+1] || nums[pos]<= nums[pos+2];
    }
};