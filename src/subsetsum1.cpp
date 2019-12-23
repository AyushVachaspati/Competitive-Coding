#include <bits/stdc++.h>
using namespace std;

int m[101][100002/2];

bool subsum(int ar[],int i, int n,int sum)
{
    if(i==n&& sum!=0)return false;
    if(sum==0)return true;
    if(sum<0)return false;

    if(m[i][sum]!=-1)return m[i][sum];
    else
    {
	bool flag = subsum(ar,i+1,n,sum-ar[i]) || subsum(ar,i+1,n,sum);
	return m[i][sum] = flag;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n];
	int sum = 0;
	for(int i=0;i<n;i++)
	{
	    scanf(" %d",&ar[i]);
	    sum+= ar[i];
	    
	}

	if(sum%2==0)
	{
	    for(int i=0;i<=n;i++)
		for(int j=0;j<= sum/2;j++)
		    m[i][j]=-1;
	    if(subsum(ar,0,n,sum/2))
		cout<<"YES"<<endl;
	    else
		cout<<"NO"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
    }
}
