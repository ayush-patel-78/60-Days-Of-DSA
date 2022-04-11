#include<iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         ll a,b,x;
         cin>>a>>b;
         x=a;
         if(a%3==0 && a%2!=0 && a+3<=b){
             x=a+3;
             cout<<a<<" "<<x<<endl;
             continue;
         }

        if(x+2<=b&&a%2==0){
            x=a+2;
            if(x<=b){
                cout<<a<<" "<<x<<endl;
            }
         }
        else if(a+3<=b){
            a=a+1;
            x=a+2;
            if(x<=b){
                cout<<a<<" "<<x<<endl;
            }

        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
   
}
