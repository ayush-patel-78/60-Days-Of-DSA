#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mpp;
        vector<int> ans;
        if(p.size()>s.size()) return ans;
        for(int i=0;i<p.size();i++){
            mpp[p[i]]++;
        }
        int i=0;
        int j=0;
        while(j<s.size()){
            if(mpp.find(s[j])!=mpp.end()){
                mpp[s[j]]--;
            }
            while(j-i+1<p.size()){
                j++;
                if(j<s.size() && mpp.find(s[j])!=mpp.end()){
                    mpp[s[j]]--;
                }
            }
            while(j-i+1==p.size() && j<s.size()){
                bool isAnagram = true;
                for(auto x:mpp){
                    if(x.second!=0){
                        isAnagram = false;
                        break;
                    } 
                }
                if(isAnagram) ans.push_back(i);
                
                if(mpp.find(s[i])!=mpp.end()){
                    mpp[s[i]]++;
                }
                i++;
                j++;
                if(j<s.size() && mpp.find(s[j])!=mpp.end()){
                    mpp[s[j]]--;
                } 
            }
        }
        return ans;
    }
};