#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;

bool hasword(vector<vc> &v, vector<vi> ar, string str, int i, int j)
{
    if(i < 0 || j<0 || i>=v.size() || j>=v[0].size())
	return false;
    if(str.size()==0)return true;
    if(v[i][j]!=str[0])
	return false;
    else
    {
	if(ar[i][j] == 1)return false;

	ar[i][j] = 1;
	bool flag = false;
	flag = flag || hasword(v,ar,str.substr(1),i+1,j);
	flag = flag || hasword(v,ar,str.substr(1),i-1,j);
	flag = flag || hasword(v,ar,str.substr(1),i,j+1);
	flag = flag || hasword(v,ar,str.substr(1),i,j-1);
	flag = flag || hasword(v,ar,str.substr(1),i+1,j+1);
	flag = flag || hasword(v,ar,str.substr(1),i+1,j-1);
	flag = flag || hasword(v,ar,str.substr(1),i-1,j+1);
	flag = flag || hasword(v,ar,str.substr(1),i-1,j-1);
	return flag;
    }	
}

bool boggle(vector<vc>&v, vector<vi> arr, string str, int n, int m)
{
    bool flag = false;
    for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	    flag = flag || hasword(v, arr, str, i,j);
    return flag;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int x;
	cin>>x;
	set<string> dict;
	vector<vc> grid;
	vector<vi> arr;
	vector<string> answer;	
	for(int i=0;i<x;i++)
	{
	    string temp;
	    cin>> temp;
	    dict.insert(temp);
	}
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	    grid.push_back(vc (m));
	    arr.push_back(vi (m));
	    for(int j=0;j<m;j++)
	    {
		cin>>grid[i][j];
		arr[i][j]=0;
	    }
	}
	

	//checking each word
	for(auto it = dict.begin();it!=dict.end();it++)
	{
	    if(boggle(grid,arr,*it,n,m))
		answer.push_back(*it);
	}

	if(answer.size())	
	{
	    for(int i=0;i<answer.size();i++)
		cout<<answer[i]<<" ";
	    cout<<endl;
	}
	else
	    cout<<-1<<endl;

    }
}
