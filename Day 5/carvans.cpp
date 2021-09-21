#include <iostream>
using namespace std;

int main() {
	int T,n,count=0;
	int max;
	cin>>T;
	while(T--)
	{
	    count=1;
	    max=1;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=1;i<n;i++)
	    {
	        count=1;
	        for(int j=0;j<i;j++)
	        {
	             if(arr[j]>=arr[i])
	             {
	               count++;
	               if(count==(i+1))
	               {
	                   max++;
	               }
	             }
	        }
	       
	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}
