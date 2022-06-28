#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mpp;
        vector<int> vec;
        set<int> st;
        
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto x:mpp){
            vec.push_back(x.second);
        }
        for(int i=0;i<vec.size();i++){
            while(st.find(vec[i])!=st.end() && vec[i]!=0){
                vec[i]--;
            }
            st.insert(vec[i]);    
        }
        int count=0;
        for(auto x:st){
            count+=x;
        }
        return s.size() - count;
    }
};