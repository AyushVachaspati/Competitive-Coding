#include <bits/stdc++.h>
using namespace std;

int length(string str)
{
    int n = str.size();
    vector<vector<int>> left(str.size(),vector<int> (str.size(),0));
    vector<vector<int>> right(str.size(),vector<int> (str.size(),0));
    int maxlen = 0;
    for(int i=0;i<n-1;i++)
    {
	int j=i+1;
	left[i][j] = stoi(str.substr(i,1));
	right[i][j] = stoi(str.substr(j,1));
	if(left[i][j]==right[i][j])
	{
	    maxlen = 2;
	}
    }
	
    for(int len=4;len<=n;len+=2)
    {
	for(int i=0;i<n-len+1;i++)
	{
	    int j = i+len-1;
	    left[i][j] = left[i+1][j-1] + stoi(str.substr(i,1)); 
	    right[i][j] = right[i+1][j-1] + stoi(str.substr(j,1)); 
	   
	    if(left[i][j]==right[i][j])
	    {
		maxlen = len;
	    }	
	}
    }
    return maxlen;

    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	cout<<length(str)<<endl;
    }
}
