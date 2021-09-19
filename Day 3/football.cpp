#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int max=0;
	    int goal[N];
	    int foul[N];
	    int score[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>goal[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>foul[i];
	    }
	    int points;
	    for(int i=0;i<N;i++)
	    {
	        points=goal[i]*20-foul[i]*10;
	        if(points>=0)
	        {
	             score[i]=points;
	        }
	        else
	           score[i]=0;
	       
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(score[i]>=max)
	        {
	            max=score[i];
	        }
	    }
	    cout<<max<<endl;
	    
	    
	    
	    
	}
	return 0;
}
