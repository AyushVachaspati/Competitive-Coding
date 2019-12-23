#include <bits/stdc++.h>
using namespace std;

void keypair(int ar[],int n,int sum)
{
    int i=0,j=n-1;

    while(i<j)
    {
	int a = ar[i]+ar[j];
	if(a==sum)
	{
	    cout<<"YES"<<endl;
	    return;
	}
	else if(a>sum)j--;
	else i++;

    }
    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,sum;
	cin>>n>>sum;
	int ar[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i];
	sort(ar,ar+n);

	keypair(ar,n,sum);

    }
}
