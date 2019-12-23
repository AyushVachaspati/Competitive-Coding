#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return b<a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	    partial_sort(ar,ar+k,ar+n,comp);
	    for(int i=0;i<k;i++)
		cout<<ar[i]<<" ";
	
	cout<<endl;
    }

}
