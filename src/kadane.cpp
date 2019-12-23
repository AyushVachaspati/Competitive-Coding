#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli kadane(int ar[],int n)
{
    lli current = INT_MIN;
    lli ma = INT_MIN;
    for(int i=0;i<n;i++)
    {
	current = max(current+ar[i],(lli)ar[i]);
	ma = max(current, ma);
    }
    return ma;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    scanf(" %d",&ar[i]);
	}
	cout<<kadane(ar,n)<<endl;
    }
}
