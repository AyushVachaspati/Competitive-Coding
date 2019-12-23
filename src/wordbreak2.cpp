#include <bits/stdc++.h>
using namespace std;


vector<string> combine(string word, vector<string> v)
{
    if(v.size()==0)
       	v.push_back(word);
    else
	for(int i=0;i<v.size();i++)
	    v[i] =word+" "+v[i];
    return v;
}

vector<string> wordbreak(string str, vector<string> dict)
{
    unordered_map<string, vector<string>> m;
    for(int i=str.size()-1;i>=0;i--)
    {
	for(int j=0;j<dict.size();j++)
	    if(str.substr(i)==dict[j])m[str.substr(i)].push_back(str.substr(i));

	else if(str.substr(i).size()>=dict[j].size() && str.substr(i,dict[j].size())==dict[j])
	    {
		if(m.count(str.substr(i+dict[j].size()))){
		vector<string> temp = combine(dict[j],m[str.substr(i+dict[j].size())]);
		m[str.substr(i)].insert(m[str.substr(i)].end(),temp.begin(),temp.end());
	    }}
    }
    return m[str];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	vector<string> v;
	int n;
	cin>>n;
	vector<string> dict(n);
	for(int i=0;i<n;i++)
	    cin>>dict[i];
	string str;
	cin>>str;
	v = wordbreak(str,dict);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	    cout<<"("+v[i]+")";
	cout<<endl;
    }
}
