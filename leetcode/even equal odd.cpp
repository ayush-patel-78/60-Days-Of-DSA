#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll size = 2*n;
        vector<ll> vec(size);
        vector<ll> even;
        bool isEven = false;
        bool isOdd = false; 
        map<ll,ll> mpp;
        for(ll i=0;i<2*n;i++){
            cin>>vec[i];
            mpp[vec[i]%2]++;
            if(vec[i]%2==0){
               isEven = true;
               even.push_back(vec[i]);
            } 
            else isOdd = true;
            
        }
        
        ll operation =0;
        if(mpp[0]>mpp[1]){
            ll count = abs(mpp[0]-n);
            ll odd = 0;
            ll i=1;
            while(odd<count){
                ll bit = 1<<i;
                for(auto x:even){
                    if((x/bit)%2==1) {
                        odd++;
                        operation += i-1;
                        if(odd>=count) break;
                    }
                }
                i++;
            }
        }
        if(isEven) cout<<abs(mpp[0]-n)+operation<<endl;
        else cout<<abs(mpp[1]-n)<<endl;
            
        

    }
    return 0;
}