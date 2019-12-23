#include <bits/stdc++.h>
using namespace std;

int bitcount(int n)
{
    int count = 0;
    while(n)
    {
	count+=n&1;
	n=n>>1;
    }
    return count;
}

bool isbleak(int n)
{
    for(int i=0;i<=n;i++)
	if(n==(i+bitcount(i)))
	    return 0;
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<isbleak(n)<<endl;
    }
}
