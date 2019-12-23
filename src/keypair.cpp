#include <bits/stdc++.h>
using namespace std;

void findx(int ar[],int n,int x)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
	int sum = ar[i]+ar[j];
	if(sum==x)
	{
	    cout<<"Yes"<<endl;
	    return;
	}
	else if(sum < x)i++;
	else j--;
    }
    cout<<"No"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,x;
	cin>>n>>x;
	int ar[n];
	for(int i=0;i<n;i++)
	    scanf(" %d ",&ar[i]);
	sort(ar,ar+n);
	findx(ar,n,x);

    }
}
