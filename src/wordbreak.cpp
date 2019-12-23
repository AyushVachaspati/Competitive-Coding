#include <bits/stdc++.h>
using namespace std;

int memo[1001];

bool breakword(string str, vector<string>& v, int a,vector<string>& ans)
{
    if(a>=str.size())
	return true;
    if(memo[a]!=-1)return memo[a];
    bool flag = false;

    for(int i=0;i<v.size();i++)
    {
	if(str.size()>=v[i].size() && str.substr(a,v[i].size())==v[i])
	    if(breakword(str, v, a+v[i].size(),ans))
	    {
		flag = true;
		ans.push_back(v[i]);
		break;
	    }
    }
    return memo[a]=flag;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vector<string> v(n);
	vector<string> ans;
	for(int i=0;i<n;i++)
	    cin>>v[i];
	string str;
	cin>>str;
	for(int i=0;i<1001;i++)
	    memo[i]=-1;
	if(breakword(str, v,0,ans))
	    for(int i=ans.size()-1;i>=0;i--)
		cout<<ans[i]<<" ";
	cout<<endl;
    }
}
