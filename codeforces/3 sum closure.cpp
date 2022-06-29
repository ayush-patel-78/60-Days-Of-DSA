#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      set<ll> st;
      vector<ll> arr(n);
      for(ll i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
      }
      sort(arr.begin(),arr.end());
      ll i=0;
      ll j=0;
      ll sum =0;
      if(arr.size()>3){
        sum =0;
        for(int i=0;i<n;i++){
          sum+=arr[i];
        }
        if(st.find(sum)!=st.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
      else {
        sum=0;
        for(int i=0;i<n;i++){
             sum+=arr[i];
        }
        if(sum==arr[0]|| sum==arr[1] || sum == arr[2]){
          cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
      }
      // while(j<n){
      //   while(j-i+1<3){
      //       j++;
      //       sum += arr[j];
      //   }
      //   while(j-i+1==3 && j<n){
      //       if(st.find(sum)==st.end()){
      //           cout<<"NO"<<endl;
      //           break;
      //       }
      //       i++;
      //       sum-=arr[i];
      //       j++;
      //       if(j<n){
      //        sum+=arr[j];
      //       }
            
      //   }
      //   break;
      // }
      // if(j==n){
      //   cout<<"YES"<<endl;
      // }
      
      
    }
    return 0;
}