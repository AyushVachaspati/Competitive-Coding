#include <bits/stdc++.h>
using namespace std;

int shortest(vector<vector<int>>& v, int n, int m, int i, int j, int x, int y, bool& flag)
{

    if(i<0 || i>=n || j<0 || j>=m)return -1;
    if(v[i][j]!=1)return -1;
    if(x==i && y==j) 
    {
	flag = true;
	return 0;
    }
    v[i][j]=-1;
    int ma = INT_MAX;
    int a = shortest(v,n,m,i+1,j,x,y,flag);
    if(a!=-1)
	ma = min(ma,a+1);
    a = shortest(v,n,m,i-1,j,x,y,flag);
    if(a!=-1)
	ma = min(ma,a+1);
    a = shortest(v,n,m,i,j+1,x,y,flag);
    if(a!=-1)
	ma = min(ma,a+1);
    a = shortest(v,n,m,i,j-1,x,y,flag);
    if(a!=-1)
	ma = min(ma,a+1);
    v[i][j] = 1;
    
    
    return ma==INT_MAX?-1:ma;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,m,x,y;
	cin>>n>>m;
	vector<vector<int>> v(n,vector<int>(m));
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
		cin>>v[i][j];
	cin>>x>>y;

	bool flag = false;
	if(v[0][0] == 0 || v[x][y]==0)
	{
	    cout<<-1<<endl;
	    continue;
	}
	int ans = shortest(v,n,m,0,0,x,y,flag);
	if(flag)
	    cout<<ans<<endl;
	else
	    cout<<-1<<endl;
    }
}
