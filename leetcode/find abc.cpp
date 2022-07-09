#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> arr(n+1);
	    for(int i=0;i<=n;i++){
	        cin>>arr[i];
	    }
	    ll value = pow(2,ceil(log2(n+1)))-1;
	   // cout<<value<<endl;
	    ll x,y,z;
	    x=n;
	    y=n;
	    z=n;
	    ll hehe = log2(n);
	   // cout<<hehe<<endl;
	    for(int i=0;i<=hehe;i++){
	        ll index = pow(2,i);
	        ll diff = arr[index]-arr[0];
	        
	        if(diff<0){
	            int one_put;
	            one_put =3 - abs(diff)/index;
	            ll bit = 1<<i;
	            if(one_put==3){
	                if(x&bit==0) x^=bit;
	                if(y&bit==0) y^=bit;
	                if(z&bit==0) z^=bit;
	            }
	            else if(one_put==2){
	                x = x^bit;
	            }
	            else if(one_put==1){
	                if(x&bit==1 && y&bit==1){
	                    x=x^bit;
	                    y-y^bit;
	                }
	                else if(x&bit==1 && z&bit==1){
	                    x=x^bit;
	                    z=z^bit;
	                }
	                else{
	                    y=y^bit;
	                    z=z^bit;
	                }
	                
	            }
	            else{
	                x^=bit;
	                y^=bit;
	                z^=bit;
	            }
	        }
	        if(diff>=0){
	            int one_put = abs(diff)/index;
	            ll bit = 1<<i;
	            if(one_put==0){
	                if(x&bit==0) x^=bit;
	                if(y&bit==0) y^=bit;
	                if(z&bit==0) z^=bit;
	            }
	            else if(one_put==2){
	                x = x^bit;
	            }
	            else if(one_put==1){
	                
	               if(x&bit==1 && y&bit==1){
	                    x=x^bit;
	                    y-y^bit;
	                }
	                else if(x&bit==1 && z&bit==1){
	                    x=x^bit;
	                    z=z^bit;
	                }
	                else{
	                    y=y^bit;
	                    z=z^bit;
	                }
	                
	            }
	            else{
	                if(x&bit==1) x=x^bit;
	                if(x&bit==1) y=y^bit;
	                if(x&bit==1) z=z^bit;
	            }
	        }
	        
	    }
	    cout<<x<<" "<<y<<" "<<z<<endl;
	}
	return 0;
}
