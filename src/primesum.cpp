#include <bits/stdc++.h>
using namespace std;

void gensieve(int ar[],int n)
{
    ar[0]=1;
    ar[1]=1;
    for(int i=2;i<n;i++)
    {
	if(ar[i]==0)
	{
	    int j = i*i;
	    while(j<n)
	    {
		ar[j]=1;
		j+=i;
	    }
	}
    }
}

int main()
{
    int ar[10000+10]={0};
    gensieve(ar,10000+10);
    
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    if(ar[i]==0 && ar[n-i]==0)
	    {
		cout<<i<<" "<<n-i<<endl;
		break;
	    }
	}
    }

}
