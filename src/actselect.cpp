#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;

int comp(pi a, pi b)
{
    return a.second<b.second;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vector<pi> v(n);
	
	for(int i=0;i<n;i++)
	    cin>>v[i].first;
	for(int i=0;i<n;i++)
	    cin>>v[i].second;
	
	sort(v.begin(),v.end(),comp);
	int count =0;
	int end = 0;
	for(int i=0;i<n;i++)
	{
	    if(v[i].first >=end)
	    {
		count++;
		end = v[i].second;
	    }
	}
	    
	cout<<count<<endl;

    }	
}
