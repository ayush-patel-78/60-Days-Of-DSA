#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> arr(n);
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool check = false;
	    ll total=0;
	    ll total_2 = 0;
	    for(int i=0;i<n;i++){
	        total += arr[i]-1;
	        if(arr[i]==1){
	            count++;
	        }
	        if(arr[i]>=2){
	            total_2 += arr[i]-2;
	        }
	        
	    }
	    if(count>0){
	        if(total_2%2==0){
	            cout<<"CHEF"<<endl;
	        }
	        else{
	            cout<<"CHEFINA"<<endl;
	        }
	        
	    }
	   // else {
	   //     if(n>=3){
	   //          int total_3 = 0;
	   //         for(int i=0;i<n;i++){
	   //             total_3 += arr[i]-1;
	   //         }
	   //         if(total_3%2==0) cout<<"CHEFINA"<<endl;
	   //         else cout<<"CHEF"<<endl; 
	            
	   //         }
	   //      else{
	   //          int total_4 =0;
	   //          for(int i=0;i<n;i++){
	   //            total_4 += arr[i]-1;   
	   //          }
	   //          if(total_4%2==1) cout<<"CHEF"<<endl;
	   //          else cout<<"CHEFINA"<<endl;
	   //      }
	         
	        
	   // }
	   if(n==2){
	       int even = 0;
	        for(int i=0;i<n;i++){
	            if(arr[i]%2==0){
	            even++;
	            }   
	        }
	        if(even%2==1) cout<<"CHEF"<<endl;
	        else cout<<"CHEFINA"<<endl;
	       
	   }
	   else{
	        int odd = 0;
	        int even = 0;
	        for(int i=0;i<n;i++){
	            if(arr[i]%2==1){
	            odd++;
	            }
	            else even++;
	        }
	        if(abs(even-odd)%2==1) cout<<"CHEFINA"<<endl;
	        else cout<<"CHEF"<<endl;
	       
	   }
	   
	    
	    
	    
	}
	return 0;
}
