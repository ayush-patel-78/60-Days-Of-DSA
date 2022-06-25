#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(vector<ll>& vec,ll largest,ll largest_2nd,ll largest_index,ll largest_2nd_index,priority_queue<ll>& pq,map<ll,ll>& mpp,int x){
     if(largest_2nd_index>largest_index){
            if(largest_2nd+largest >= x){
                return true;
            }
            else{
                return false;
            }
        }
     else{
        if(pq.size()>1){
            largest = pq.top();
            pq.pop();
            largest_2nd = pq.top();
            largest_index = mpp[largest];
            largest_2nd_index = mpp[largest_2nd];
            return solve(vec,largest,largest_2nd,largest_index,largest_2nd_index,pq,mpp,x);
        }
        else return true;
       
     }
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> vec(n);
        map<ll,ll> mpp;
        priority_queue<ll> pq;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            mpp[vec[i]]=i;
            pq.push(vec[i]);
        }
        ll largest = pq.top();
        pq.pop();
        ll largest_2nd = pq.top();
        ll largest_index = mpp[largest];
        ll largest_2nd_index = mpp[largest_2nd];
        if(solve(vec,largest,largest_2nd,largest_index,largest_2nd_index,pq,mpp,x)){
             cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
	// your code goes here
	
	return 0;
}
