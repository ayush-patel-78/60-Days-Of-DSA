#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       cout<<arr[0]<<endl;
    }
    return 0;
}