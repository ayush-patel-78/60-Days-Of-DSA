#include <iostream>
#define ll long long 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll count_opposite_inside = 0;
	    char prev = s[0];
	    char prev2 = s[0];
	    vector<char> hehe;
	    for(ll i=0;i<n;i++){
	        if(prev==s[i]){
	            continue;
	        }
	        else{
	            hehe.push_back(s[i]);
	            prev=s[i];
	        }
	    }
	    ll count=0;
	    if(hehe.size()>0){
	        char c = hehe[0];
	    for(int i=0;i<hehe.size();i++){
	        if(c!=hehe[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    }
	    
	}
	return 0;
}
