#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool static compare(int& a1,int& a2){
        return a1>a2;
    }
    int findKthLargest(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end(),compare);  
        return nums[k-1];
    }
};