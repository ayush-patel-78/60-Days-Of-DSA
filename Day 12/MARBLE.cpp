#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isvowel(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        return 1;
    }
    else
      return 0;
}

int main() {
    long long int t,n,ans=999999999;
    string s,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>p;
        ans=9999999;
        for(char ch='a';ch<='z';ch++)
        {
            int op=0;
            for(int i=0;i<n;i++)
            {
               
                char a=s[i];
                char b=p[i];
                if(a=='?')
                {
                    a=ch;
                }
                if(b=='?')
                {
                    b=ch;
                }
                if(a==b)
                {
                    continue;
                }
                else if(isvowel(a)!=isvowel(b))
                {
                    op=op+1;
                }
                else
                {
                    op=op+2;
                }
            
            }
            if(op<=ans)
            {
                ans=op;
            }
        }
        cout<<ans<<endl;
    }
	
	return 0;
}
