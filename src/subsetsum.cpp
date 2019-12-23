#include <bits/stdc++.h>
using namespace std;

bool subsum(int ar[],int i, int n,int sum)
{
    int dp[n][sum+1] = {0};

    for(int i=0;i<n;i++)
	dp[i][0]=1;

    for(int i=1;i<=sum;i++)
	dp[0][sum] = ar[0]>i?0:dp[0][i-ar[0]];

    for(int i=1;i<n;i++)
    {
	for(int j=0;j<=sum;j++)
	{
	    if(ar[i]>j)
		dp[i][j]=dp[i-1][j];
	    else
		dp[i][j] = dp[i-1][j-ar[i]] || dp[i-1][j];
	}
    }
    return dp[n-1][sum];    
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
	int sum = 0;
	for(int i=0;i<n;i++)
	{
	    scanf(" %d",&ar[i]);
	    sum+= ar[i];
	    
	}

	if(sum%2==0)
	{
	    if(subsum(ar,0,n,sum/2))
		cout<<"YES"<<endl;
	    else
		cout<<"NO"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
    }
}
