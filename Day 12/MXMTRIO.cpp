#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t,n,max=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    max=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    sort(arr,arr+n);
	    max= (long)(arr[n-1]-arr[0])*arr[n-2];
	  
	    cout<<max<<endl;
	    
	}
	return 0;
}
