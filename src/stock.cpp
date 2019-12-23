#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;

void stock(vi& v, vector<pi>& p)
{
    int i=0,j=0;
    v.push_back(INT_MIN);
    while(j<v.size()-1)
    {
	if(v[j+1]<v[j])
	{
	    p.push_back(make_pair(i,j));
	    i=j+1;
	    j++;
	}
	else
	{
	    j++;
	}
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)
	    cin>>v[i];
	vector<pi> p;
	stock(v,p);

	auto it = p.begin();
	flag = true;
	while(it!=p.end())
	{
	    if(it->first!=it->second)
		cout<<"("<<it->first<< " " <<it->second<<") ",flag=false;
	    it++;
	}
	if(flag)
	    cout<<"No Profit";
	cout<<endl;
    }
}
