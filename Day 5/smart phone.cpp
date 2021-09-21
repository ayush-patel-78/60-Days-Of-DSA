#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,max=0;
	long long int revenue;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
	     revenue=arr[i]*(n-i);
	     if(revenue>=max)
	     {
	         max=revenue;
	     }
	}
	cout<<max;
	
	
	return 0;
}
