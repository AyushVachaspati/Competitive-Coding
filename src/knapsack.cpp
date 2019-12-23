#include <bits/stdc++.h>
using namespace std;


int knapsack(int value[],int weight[],int w,int n)
{
    int dp[n][w+1];
    for(int i=0;i<n;i++)
	dp[i][0]=0;
    for(int i=1;i<=w;i++)
	dp[0][i] = weight[0]>i?0:value[0];

    for(int i=1;i<n;i++)
	for(int j=1;j<=w;j++)
	{
	    if(weight[i]>j)
		dp[i][j] = dp[i-1][j];
	    else
		dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
	}
    return dp[n-1][w];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int w;
	cin>>w;
	int value[n], weight[n];
	for(int i=0;i<n;i++)
	    cin>>value[i];
	for(int i=0;i<n;i++)
	    cin>>weight[i];

	cout<<knapsack(value,weight,w,n)<<endl;
    }
}
