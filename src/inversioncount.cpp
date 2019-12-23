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
	long long ar[n],br[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i],br[i]=ar[i];
	int count = 0;
	set<long long> s;
	for(int i =0;i<n;i++)
	{
	    s.insert(ar[i]);
	    s.lower_bound(ar[i]);
	}
	cout<<count<<endl;
    }
}
