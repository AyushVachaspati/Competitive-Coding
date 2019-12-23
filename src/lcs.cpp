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
	string s1;
	cin>>s1;
	int dp[n+1][n+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<n+1;i++)
	    for(int j=1;j<n+1;j++)
	    {
		if(s1[i-1]==s1[j-1] && i!=j)
		    dp[i][j] = dp[i-1][j-1]+1;
		else
		    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	    }

	cout<<dp[n][n]<<endl;

    }
}
