#include <iostream>
using namespace std;

int main() {
	long long int t,n,rem1,rem2;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    rem1=rem2=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%3==1)
	        {
	            rem1++;
	        }
	        else if(arr[i]%3==2)
	        {
	            rem2++;
	        }
	        
	    }
	    if((rem1+rem2*2)%3==0)
	    {
	        if(rem1==rem2)
	        {
	            cout<<rem1<<endl;
	        }
	        else if(rem1<rem2)
	        {
	            cout<<rem1+((rem2-rem1)*2)/3<<endl;
	        }
	        else if(rem2<rem1)
	        {
	            cout<<rem2+((rem1-rem2)*2)/3<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
