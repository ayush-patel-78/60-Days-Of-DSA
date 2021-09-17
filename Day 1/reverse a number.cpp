#include <iostream>
using namespace std;

int main() {
	int T,n;
	int rev;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    rev=0;
	    while(n>0)
	    {
	        int x = n%10;
	        
	        rev = rev*10 + x ;
	        n=n/10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}
