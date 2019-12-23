#include <bits/stdc++.h>
using namespace std;

int longest(int ar[],int n)
{
    int i=0,j=0;
    int m = INT_MIN;

    while(j<n)
    {
	if(ar[j+1]!=(ar[j]+1))
	{
	    m = max(m,j-i+1);
	    i=j+1;
	    j++;
	}
	else
	    j++;
    }
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n+1];
	ar[n]=INT_MAX;
	for(int i=0;i<n;i++)
	    cin>>ar[i];
	ar[n]=INT_MAX;
	sort(ar,ar+n+1);
	
	for(int i=0;i<n;i++)
	    cout<<ar[i]<<endl;
	cout<<endl<<endl;
	cout<<longest(ar,n)<<endl;
    }
}
