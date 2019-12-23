#include <bits/stdc++.h>
using namespace std;

bool is_k_pal(string str, int n)
{
    if(str.size()==0  || str.size()==1)return 1;
    if(str.size()==2)
	return n>=1?1:str[0]==str[1];
    int memo[str.size()][str.size()];

    for(int i=0;i<str.size();i++)
	memo[i][i]=0;

    for(int i=0;i<str.size()-1;i++)
	memo[i][i+1] = str[i]!=str[i+1];

    for(int len=3;len<=str.size();len++)
    {
	for(int i=0;i<=str.size()-len;i++)
	{
	    int j = i+len-1;

	    if(str[i]==str[j])
		memo[i][j] = memo[i+1][j-1];
	    else
		memo[i][j] = min(memo[i+1][j],memo[i][j-1])+1;
	}
    }



    return memo[0][str.size()-1]<=n; 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	int n;
	cin>>str>>n;

	cout<<is_k_pal(str,n)<<endl;
    

    }
}
