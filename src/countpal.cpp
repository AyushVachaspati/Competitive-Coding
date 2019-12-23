#include <bits/stdc++.h>
using namespace std;

int countpal(string str)
{
    int count=0;
    bool dp[str.size()][str.size()];
    memset(dp,0,sizeof(dp));
    unordered_map<string,bool> m;
    
    for(int i=0;i<str.size()-1;i++)
    {
	dp[i][i] = 1;
	m[str.substr(i,1)]=1;
	if(str[i]==str[i+1])
	{
	    dp[i][i+1]=1;
	    m[str.substr(i,2)]=1;
	}
    }
    dp[str.size()-1][str.size()-1]=1;
    m[str.substr(str.size()-1,1)]=1;

    for(int len=3;len<str.size()+1;len++)
    {
	for(int i=0;i<str.size()-len+1;i++)
	{
	    int j = i+len-1;
	    if(str[i]==str[j])
	    {
		if(dp[i+1][j-1])
		{
		    m[str.substr(i,len)]=1;
		    dp[i][j]=1;
		}
	    }
	    
	}
    }
    return m.size();

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	cout<<countpal(str)<<endl;
    }

}
