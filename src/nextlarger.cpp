#include<bits/stdc++.h>
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
	int span[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	span[n-1]=-1;
	for(int i=n-2;i>=0;i--)
	{
	    int index = i+1;
	    while(index!=-1)
	    {
		if(ar[index]>ar[i])
		{
		    break;
		}
		else
		{
		    index = span[index];
		}
	    }
	    span[i]=index;
	}
	for(int i=0;i<n;i++)
	{
	    if(span[i]==-1)
		cout<<-1<<" ";
	    else
		cout<<ar[span[i]]<<" ";
	}
	cout<<endl;
    }
}
