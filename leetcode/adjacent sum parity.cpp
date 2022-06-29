#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        ll sum =0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}