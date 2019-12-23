#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;cin>>n;
	vector<int> v(n);
	for(int i =0;i<n;i++)
	    cin>>v[i];

	int maxseq = INT_MIN;

	int dp[n];
	dp[n-1] = 1;

	for(int i=n-2;i>=0;i--)
	{
	    int m = 0;
	    for(int j=i+1;j<n;j++)
	    {
		if(v[j]>v[i])
		    m = max(m,dp[j]);
	    }
	    dp[i] = m+1;
	    maxseq = max(maxseq,dp[i]);
	}
	cout<<maxseq<<endl;
    }
}
