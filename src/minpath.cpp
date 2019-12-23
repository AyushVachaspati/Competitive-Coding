#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n][n];
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
		cin>>ar[i][j];
	for(int i=1;i<n;i++)
	    ar[0][i] += ar[0][i-1];
	for(int i=1;i<n;i++)
	    ar[i][0] += ar[i-1][0];

	for(int i=1;i<n;i++)
	    for(int j=1;j<n;j++)
		ar[i][j] += min(ar[i-1][j],ar[i][j-1]);
	cout<<ar[n-1][n-1]<<endl;

    }
}
