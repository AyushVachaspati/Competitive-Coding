#include <bits/stdc++.h>
using namespace std;

int zigzag(vector<int> ar[], int n,int i)
{
    int dp[n][n];
    for(int i=0;i<n;i++)
	dp[0][i] = ar[0][i];

    for(int i=1;i<n;i++)
	for(int j=0;j<n;j++)
	{
	    int m = INT_MIN;
	    for(int k=0;k<n;k++)
		if(k!=j)
		    m = max(m,dp[i-1][k]);
	    dp[i][j] = m+ar[i][j];
	}
    int m = INT_MIN;
    
    
    for(int i=0;i<n;i++)
	m = max(dp[n-1][i],m);
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
	vector<int> ar[n];

	for(int i =0;i<n;i++){
	    ar[i].assign(n,0);
	    for(int j=0;j<n;j++)
		cin>>ar[i][j];
	}

	int m = INT_MIN;
	for(int i=0;i<n;i++)
	    m=max(m,zigzag(ar,n,i));
    
	cout<<m<<endl;
    }
}
