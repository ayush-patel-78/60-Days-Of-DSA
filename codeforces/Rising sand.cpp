#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
      ll n,k;
      cin>>n>>k;
      vector<int> arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int count = 0;
      if(k==1) cout<<n-2<<endl;
      for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]+arr[i-1]) count++;
      }
      cout<<count<<endl;
    }
    return 0;
}