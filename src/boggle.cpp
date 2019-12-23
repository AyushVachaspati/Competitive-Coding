#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;

int n, m;

bool boggle(vector<vc>& ar, int i, int j, int k, string& str, vector<vi>& visited)
{
    if(i<0 || i>=n || j<0|| j>=m)return false;
    if(k>=str.size())return true;
    if(visited[i][j]==1)return false;
    if(str[k]!=ar[i][j])return false;

    bool flag = false;
    
    visited[i][j]=1;
    
    flag = flag || boggle(ar,i+1,j,k+1,str,visited);    
    flag = flag || boggle(ar,i-1,j,k+1,str,visited);    
    flag = flag || boggle(ar,i,j+1,k+1,str,visited);    
    flag = flag || boggle(ar,i,j-1,k+1,str,visited);    
    flag = flag || boggle(ar,i+1,j+1,k+1,str,visited);    
    flag = flag || boggle(ar,i+1,j-1,k+1,str,visited);    
    flag = flag || boggle(ar,i-1,j+1,k+1,str,visited);    
    flag = flag || boggle(ar,i-1,j-1,k+1,str,visited);    
    
    visited[i][j]=0;
    
    return flag;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int x;
	cin>>x;
	vector<string> v(x);
	
	for(int i=0;i<x;i++)
	    cin>>v[i];

	cin>>n>>m;
	vector<vc> ar(n,vc (m));
	vector<vi> visited(n,vi (m));
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
		cin>>ar[i][j],visited[i][j]=0;
	
	for(int k=0;k<v.size();k++)
	{
	    bool flag = false;
	    for(int i=0;i<n;i++)
	    {
		for(int j=0;j<m;j++)
		    if(ar[i][j] == v[k][0])
			if(boggle(ar,i,j,0,v[k],visited))
			{
			    cout<<v[k]<<" ";
			    flag = true;
			    break;
			}
		if(flag)break;
	    }
	}
	cout<<endl;



	
    }
}
