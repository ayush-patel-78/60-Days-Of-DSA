#include <bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        ll n = cardPoints.size();
        ll size_of_subarray = n - k;
        if(k==n){
            ll total_score = 0;
            for(int i=0;i<n;i++){
                total_score+=cardPoints[i];
            }
            return total_score;
        }

        // Sliding window approach (my Approach)
        // step 1: we will calculate sum of score of the array 
        // step 2: for maximum score we have to find out minimum score subarray of size (n-k);
        // step 3:we have to calculate minimum score subarray of size (n-k);
        // step 4: return score value (total - minimum) score;
        int i = 0;
        int j = 0;
        ll total_score = 0;
        ll score = 0;
        ll min_score = INT_MAX;
        while(j<n){
            score+=cardPoints[j];
            total_score+=cardPoints[j];
                
                while(j-i+1 < size_of_subarray && j<n){
                    j++;
                    if(j<n){
                        score+=cardPoints[j];
                        total_score+=cardPoints[j];
                    }   
                }
                while(j-i+1 == size_of_subarray && j<n){
                      if(score<min_score){
                          min_score=score;
                      }
                      j++;
                      if(j<n){
                          score+=cardPoints[j];
                          total_score+=cardPoints[j];
                      }
                      score-=cardPoints[i];
                      i++;
                }   
        }
        return total_score - min_score;
    }
};