#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> vec(n);
        ll sum =0;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        ll total = sum/(n+1);
        vector<ll> ans(n);
        for(ll i=0;i<n;i++){
            ans[i]=vec[i]-total;
            cout<<ans[i]<<" ";
        }
       cout<<endl;


    }
    return 0;
}