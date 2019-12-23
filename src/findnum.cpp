#include <iostream>
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
	n = 2*n+2;
	int ar[n];
	int xo = 0;
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    xo ^= ar[i];
	}

	int a;
	int b;
	int index;
	for(index = 0; index<32;index++)
	{
	    if((xo & 1<<index)!=0)
		break;
	}
	
	int temp =0;
	for(int i=0;i<n;i++)
	{
	    if((ar[i] & 1<<index)!=0)
		temp ^= ar[i];
	}
	a = xo^temp;
	b = xo^a;

	if(a<b)
	    cout<<a<<" "<<b<<endl;
	else
	    cout<<b<<" "<<a<<endl;

    }
}
