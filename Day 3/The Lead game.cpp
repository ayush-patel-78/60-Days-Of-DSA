#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int T,lead=0,max=0,winner,x,y;
	cin>>T;
	int p1[T];
	int p2[T];
	
	
	    for(int i=0;i<T;i++)
	    {
	        cin>>p1[i]>>p2[i];
	    }
	    for(int i=0;i<T;i++)
	    {
           x=p1[i]-p2[i];
           
           lead=lead+x;
          
           if(abs(lead)>=max)
           {
               max= abs(lead);
               if(lead>=0)
               {
                   winner=1;
               }
               else
                winner=2;
           }
           
	        
	    }
	    cout<<winner<<" "<<max;
	        
	    
	    
	
	return 0;
}
