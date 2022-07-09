#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(t--){
    ll x,y;
    cin>>x>>y;
    ll diff = abs(x-y);
    ll moves;
    if(diff%10 == 0){
        moves = diff/10;
    }
    else {
         moves = diff/10 + 1;
    }
    cout<<moves<<endl;
   }
}