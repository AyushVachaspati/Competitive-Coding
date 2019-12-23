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
	map<int,int> m;
	int k = n/2;
	while(n--)
	{
	    int temp;
	    cin>>temp;
	    m[temp]++;
	}
	auto it = m.begin();
	int flag = 0;
	while(it!=m.end())
	{
	    if(it->second >k)
	    {
		cout<<it->first<<endl;
		flag = 1;
	    }
	    it++;
	}
	if(!flag)
	    cout<<-1<<endl;
    }
}
