#include <bits/stdc++.h>
using namespace std;

int maxfac(int n)
{
    int a = (int)sqrt(n)+1;
    int ans=1;
    if(n%2==0)
    {
	ans = 2;
	n/=2;
    }
    for(int i=3;i<=a;i+=2)
	if(n%i==0)
	{
	    ans=i;
	    n/=i;
	}
    if(n>2)return n;
    else return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<maxfac(n)<<endl;
    }
}
