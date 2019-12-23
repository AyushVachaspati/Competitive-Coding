#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int coin(vi& v,int n)
{
    int dp[v.size()+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<v.size()+1;i++)
	dp[i][0]=1;
    


    for(int i=1;i<v.size()+1;i++){
	for(int j=1;j<n+1;j++)
	{
	    if(v[i-1]>j)
		dp[i][j] = dp[i-1][j];
	    else
		dp[i][j] = dp[i-1][j]+dp[i][j-v[i-1]];
	}
    }


    return dp[v.size()][n];
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)
	    cin>>v[i];
	cin>>n;
	cout<<coin(v,n)<<endl;
    }
}
