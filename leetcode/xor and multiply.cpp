#include <iostream>
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,a,b;
	    cin>>n>>a>>b;
	    int count =0;
	    ll x = 0;
	    for(int i=n-1;i>=0;i--){
	        ll bit = 1<<i;
	        
	        if((a&bit)==0 && (b&bit)==0){
	            x = x + (1<<i);
	           // cout<<"YES"<<endl;
	        }
	        else if((a&bit)!= (b&bit)){
	            count++;
	            if(count==1 && (a&bit)==0){
	                x= x+(1<<i);
	            }
	            else if(count>1 && (b&bit)==0){
	                x= x+(1<<i);
	            }
	        }
	    }
	   
	   cout<<x<<endl;
	    
	}
	return 0;
}
