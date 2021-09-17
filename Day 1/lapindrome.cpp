#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    string s,s1,s2;
	    cin>>s;
	    if(s.length()%2==0)
	    {
	        s1=s.substr(0,s.length()/2);
	        s2=s.substr(s.length()/2,s.length());
	    }
	    else
	     {
	         s1=s.substr(0,s.length()/2 +1);
	         s2=s.substr(s.length()/2,s.length());
	     }
	     sort(s1.begin(),s1.end());
	     sort(s2.begin(),s2.end());
	     
	     if(s1==s2)
	       cout<<"YES\n";
	     else
	       cout<<"NO\n";
	}
	return 0;
}
