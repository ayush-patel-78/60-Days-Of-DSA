#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>vec(n);
        vec.push_back(1);
        vec.push_back(2);
        for(int i=3;i<=n;i++){
            vec.push_back(i);
        }
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(2);
        for(int i=2;i<=n;i++){
             if((ans[i-2]^ans[i-1])!=i){
                ans.push_back(vec[0]);
                vec.erase(vec.begin());
             }
             else{
                if(vec.size()<2){
                    cout<<"-1"<<endl;
                    break;
                }
                ans.push_back(vec[1]);
                vec.erase(vec.begin()+1);
             }
        }
        if(ans.size()==n){
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }
        
        cout<<endl;
    }
}