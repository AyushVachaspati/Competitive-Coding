#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    int ab = stoi(to_string(a)+to_string(b));
    int ba = stoi(to_string(b)+to_string(a));
    return ba<ab;
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
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	sort(ar,ar+n,comp);

	for(int i=0;i<n;i++)
	    cout<<ar[i];
	cout<<endl;
    }
}
