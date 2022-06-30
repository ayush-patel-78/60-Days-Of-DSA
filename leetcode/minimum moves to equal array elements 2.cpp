#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        ll moves = 0;
        ll sum =0;
        ll count_big=0;
        ll count_small=0;
        ll count_equal =0;
        sort(nums.begin(),nums.end());
        for(ll i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        ll avg = sum/nums.size();
        for(ll i=0;i<nums.size();i++){
             if(avg>nums[i]) count_small++;
            if(avg<nums[i]) count_big++;
            if(avg==nums[i]) count_equal++;
        }
        if(count_small==count_big){
                for(ll i=0;i<nums.size();i++){
                    moves += abs(avg-nums[i]);
                }
                return moves;
        }
        else{
              avg = nums[nums.size()/2];
              for(ll i=0;i<nums.size();i++){
                moves += abs(avg-nums[i]);
              }
            return moves;
        }
        return moves;
        
    }
};