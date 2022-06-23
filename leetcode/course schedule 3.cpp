#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    bool static compare(vector<int>& c1,vector<int>& c2){
        return c1[1]<c2[1];
    }
   // 1st step: Sort the array 
//  2nd step: Use Max heap or priority queue to store the max duartion course and replace it with small course  
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),compare);
        ll days=0;
        int no_of_course=0;
        priority_queue<int>pq;
        for(int i=0;i<courses.size();i++){
            days+=courses[i][0];
            if(days<=courses[i][1]){
                no_of_course++;
                pq.push(courses[i][0]);
            }
            else{
                if(pq.size()>0 && pq.top()>courses[i][0]){
                    days-=pq.top();
                    pq.pop();
                    pq.push(courses[i][0]);
                }
                else{
                    days-=courses[i][0];
                }
                
            }
        }
        return pq.size();
        
        
    }
};