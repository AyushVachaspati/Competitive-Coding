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
	int a[n+1],b[n+1];
	a[n]=b[n]=INT_MAX;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	for(int i=0;i<n;i++)
	    cin>>b[i];

	int i=0,j=0,count=0;

	while(count<n-1)
	{
	    if(a[i]<=b[j])
		i++,count++;
	    else
		j++,count++;
	}

	int sum=0;
	int x=2;
	while(x--){
	if(a[i]>=b[j])
	{
	    sum+=b[j];j++;}
	else
	{
	    sum+=a[i];i++;}
	}

	cout<<sum<<endl;

    }
}
