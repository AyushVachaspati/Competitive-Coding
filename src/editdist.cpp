#include <bits/stdc++.h>
using namespace std;


int editdist(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();

    n++,m++;
    int dp[n][m] = {0};

    for(int i=1;i<n;i++)
	dp[i][0]=i;
    for(int i=1;i<m;i++)
	dp[0][i]=i;

    for(int i=1;i<n;i++)
	for(int j=1;j<m;j++)
	{
	    if(str1[i-1]==str2[j-1])
		dp[i][j] = dp[i-1][j-1];
	    else
		dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
	}
	
    return dp[n-1][m-1];

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str1, str2;
	int ig;
	cin>>ig>>ig;
	cin>>str1>>str2;
	cout<<editdist(str1,str2)<<endl;
    }
}
