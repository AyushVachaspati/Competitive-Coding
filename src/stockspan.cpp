#include<bits/stdc++.h>
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
	int span[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	span[0]=1;
	for(int i=1;i<n;i++)
	{
	    int current = 1;
	    while(current<=i)
	    {
		if(ar[i-current]>ar[i])
		{
		    break;
		}
		else
		{
		    current+=span[i-current];
		}
	    }
	    span[i]=current;
	}
	for(int i=0;i<n;i++)
	    cout<<span[i]<<" ";
	cout<<endl;
    }
}
