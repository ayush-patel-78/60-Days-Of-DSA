#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum =0;
    for(ll i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    ll avg;
    ll big =0;
    ll small = 0;
    avg = sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]-avg>= sum/n){
            big++;
        }
        else small++;
    }
    if(big>small) {
        if(sum/n==0)
            avg = sum/n+1;
        else avg = sum/n +1;
    }
    else if(sum%n==0) avg = sum/n;
    else avg = sum/n ;
    
    ll millisecond_big = 0;
    ll millisecond_small =0;

    
    for(ll i=0;i<n;i++){
        if(avg-arr[i]>=0)
            millisecond_small+=avg-arr[i];
    }
    for(ll i=0;i<n;i++){
        if(arr[i]-avg>=0)
            millisecond_big+=arr[i]-avg;
    }
    if(big>small) cout<<millisecond_small<<endl;
    else cout<<millisecond_big<<endl;
    // cout<<millisecond_small<<endl;
     
    

}