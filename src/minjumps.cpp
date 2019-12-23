#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int minjumps(int ar[],int n, int a)
{
    int dp[n];
    dp[n-1] = 0;
    for(int i=n-2;i>=0;i--)
    {
	if(ar[i]==0)dp[i]= INT_MAX;
	else if (ar[i]>=n-i-1)dp[i]=1;
	else
	{
	    dp[i]=INT_MAX;
	    for(int j=i+1;j<i+ar[i]+1;j++)
		if(dp[j]!=INT_MAX)
		    dp[i] = min(dp[i],dp[j]+1);
	}

    }
    return dp[0]==INT_MAX?-1:dp[0];
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
	    cin>>ar[i];
	}
	cout<<minjumps(ar,n,0)<<endl;
    }
}
