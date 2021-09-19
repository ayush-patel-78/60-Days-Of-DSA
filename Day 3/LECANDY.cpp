#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,c,sum=0;
	    cin>>n>>c;
	    int ele[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ele[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+ele[i];
	    }
	    if(c>=sum)
	    {
	        cout<<"Yes\n";
	    }
	    else
	      cout<<"No\n";
	}
	return 0;
}
