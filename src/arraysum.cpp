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
	int a[m+1]={0},b[m+1]={0};
	for(int i=m-n+1;i<m+1;i++)
	    cin>>a[i];
	for(int i=1;i<m+1;i++)
	    cin>>b[i];

	int carry=0;
	for(int i=m;i>=0;i--)
	{
	    int sum = a[i]+b[i]+carry;
	    carry = sum/10;
	    b[i] = sum%10;
	}

	if(b[0])
	    cout<<b[0]<<" ";
	for(int i=1;i<m+1;i++)	
	    cout<<b[i]<<" ";
	cout<<endl;
    }
}
