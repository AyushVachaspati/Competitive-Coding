#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	lli ar[n];
	int left[n];
	int right[n];
	for(int i=0;i<n;i++)
	    scanf("%lld",&ar[i]);

	right[n-1]=-1;
	for(int i=n-2;i>=0;i--)
	{
	    int current = i+1;
	    while(1)
	    {
		if(ar[current]>=ar[i])
		{
		    if(right[current]==-1)
		    {
			right[i]=-1;
			break;
		    }
		    else
			current = right[current];
		}
		else
		{
		    right[i]=current;
		    break;
		}
	    }
	}
	

	left[0]=-1;
	for(int i=1;i<n;i++)
	{
	    int current = i-1;
	    while(1)
	    {
		if(ar[current]>=ar[i])
		{
		    if(left[current]==-1)
		    {
			left[i]=-1;
			break;
		    }
		    else
			current = left[current];
		}
		else
		{
		    left[i]=current;
		    break;
		}
	    }
	}


	lli area = 0;
	for(int i=0;i<n;i++)
	{
	    
	    int l = left[i];
	    int r = right[i];
	    lli a;
	    if(l==-1 && r==-1)
		a = ar[i]*(n);
	    else if(l==-1)
		a = ar[i]*(r);
	    else if(r==-1)
		a = ar[i]*(n-1-l);
	    else 
		a = ar[i]*(r-l-1);
	    area = max(area,a);
	}

	cout<<area<<endl;

    }
}
