#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	stack<int> s;
	int m=0;
	int ar[str.size()];
	for(int i=0;i<str.size();i++)
	    ar[i]=0;
	for(int i= 0; i<str.size(); i++)
	{
	    if(str[i]=='(')
		s.push(i);
	    else
	    {
		if(s.empty())
		{
		    ar[i]=0;
		}
		else
		{
		    ar[i]=1;
		    ar[s.top()]=1;
		    s.pop();
		}
	    }
	}
	int current=0;
	m=0;
	for(int i=0;i<str.size();i++)
	{
	    if(ar[i])
	    {
		current++;
		m= max(m,current);

	    }
	    else
	    {
		current = 0;
	    }
	}
	cout<<m<<endl;
    }
}
