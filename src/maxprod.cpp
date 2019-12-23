#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,m;
	cin>>n>>m;
	lli a[n],b[m];
	lli memo[n+1][m+1];

	for(int i=0;i<n;i++)
	    cin>>a[i];
	for(int i=0;i<m;i++)
	    cin>>b[i];

	for(int i=0;i<=n;i++)
	    memo[i][0]=0;
	for(int i=0;i<=m;i++)
	    memo[0][i]=0;

	for(int i=1;i<=n;i++)
	    for(int j=1;j<=m;j++){
		if(i==j)
		    memo[i][j] =a[i-1]*b[j-1]+memo[i-1][j-1];
		else
		    memo[i][j]= max(a[i-1]*b[j-1]+memo[i-1][j-1], memo[i-1][j]);
		}
	cout<<memo[n][m]<<endl;
    }
}
