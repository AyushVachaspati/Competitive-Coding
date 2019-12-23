#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,m;
	cin>>n>>m;
	int ar[n][m];
	for(int i =0;i<n;i++)
	    for(int j=0;j<m;j++)
		cin>>ar[i][j];
	int k;
	cin>>k;
	int i=0,j=m-1;
	while(i<n && j>=0)
	{
	    if(ar[i][j]>k)
		j--;
	    else if(ar[i][j]<k)
		i++;
	    else
	    {cout<<"1"<<endl;
		break;}
	}
	if(i==n || j==-1)cout<<0<<endl;
    }
}
