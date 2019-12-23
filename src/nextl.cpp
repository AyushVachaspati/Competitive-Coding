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
	int nl[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i];

	nl[n-1]=-1;

	for(int i=n-2;i>=0;i--)
	{
	    int current = i+1;
	    while(1)
	    {
		if(ar[current]<=ar[i])
		{
		    if(nl[current]==-1)
		    {
			nl[i]=-1;
			break;
		    }
		    else
			current = nl[current];
		}
		else
		{
		    nl[i]=current;
		    break;
		}

	    }

	}
	for(int i=0;i<n;i++)
	    if(nl[i]!=-1)
		cout<<ar[nl[i]]<<" ";
	    else
		cout<<-1<<" ";
	cout<<endl;
    }
}
