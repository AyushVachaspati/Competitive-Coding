#include <bits/stdc++.h>
using namespace std;

int longestpal(string str, int& start, int& end)
{
    bool dp[str.size()][str.size()];
    memset(dp,0,sizeof(dp));
    int ml = INT_MIN;
    for(int i=0;i<str.size();i++)
    {
	if(1>ml)
	    ml=1,start=i,end=i;
	dp[i][i]=1;
    }
    for(int i =0;i<str.size()-1;i++)
    {
	if(str[i]==str[i+1])
	{
	    if(2>ml)
		ml=2,start=i,end=i+1;
	    dp[i][i+1]=1;
	}
    }

    for(int len=3;len<str.size()+1;len++)
    {
	for(int i=0;i<str.size()-len+1;i++)
	{
	    int j = i+len-1;
	    if(str[i]==str[j])
	    {
		if(dp[i+1][j-1])
		{
		    dp[i][j]=1;
		    if(len>ml)
			ml=len,start=i,end=j;
		}
	    }
	    else
		dp[i][j]=0;
	}
    }
    
    return ml;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	int i,j;
	int len = longestpal(str,i,j);
	cout<<str.substr(i,len)<<endl;
    }
}
