#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n];
	int lmin[n];
	int rmax[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];	
	}
	lmin[0] = ar[0];
	for(int i=1;i<n;i++)
	{
	    lmin[i] = min(lmin[i-1],ar[i]);
	}
	rmax[n-1] = ar[n-1];
	for(int i=n-2;i>=0;i--)
	{
	    rmax[i] = max(ar[i],rmax[i+1]);
	}

	int width = 0;
	int i=n-1, j = n-1;
	while(i>=0 && j>=0)
	{
	    if(i==j)
		i--;
	    else if(lmin[i]<=rmax[j])
		width = max(width, j-i),i--;
	    else
		j--;
	}
	cout<<width<<endl;

    }
}
