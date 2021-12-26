#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,one,zero;
	string str;
	cin>>t;
	while(t--){
	    cin>>n;
	    one=0;
	    zero=0;
	    cin>>str;
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            one++;
	        }
	        else{
	            zero++;
	        }
	        
	    }
	    if(one<=1 || zero <=1)
	    {
	        cout<<0<<endl;
	    }
	    else{
	        if(one<=zero){
	            cout<<one-1<<endl;
	        }
	   else{
	            cout<<zero-1<<endl;
	        }
	    }
	    
	}
	return 0;
}
