#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ar;

void floodfill(vector<string> &v, int a,int i, int j,char value)
{
    if(i >= v.size() || j >= (v[0].size()) || i < 0 || j < 0)
    {
	return;
    }
    else
    {
	if(ar[i][j]!=-1) 
	{
	    return;
	}
	else
	{
	    if(v[i][j] == value)
	    {
		ar[i][j] = a;
		floodfill(v,a,i+1,j,value);
		floodfill(v,a,i-1,j,value);
		floodfill(v,a,i,j+1,value);
		floodfill(v,a,i,j-1,value);
	    }
	    else
		return;
	}
    }
}

int strokes(vector<string> v)
{
    for(int i=0;i<v.size();i++)
	ar.push_back(vector<int>(v[0].size()));
    for(int i=0;i<v.size();i++)
	for(int j=0;j<v[0].size();j++)
	    ar[i][j] = -1;
    int m =0;
    for(int i=0;i<v.size();i++)
	for(int j=0;j<v[0].size();j++)
	{
	    if(ar[i][j]==-1)
		floodfill(v,m,i,j,v[i][j]),m++;
	}
    return m;
}

int main()
{
    vector<string> v;
    v.push_back("aaabb");
    v.push_back("aaacc");
    v.push_back("acccc");
    cout<<strokes(v)<<endl;
}
