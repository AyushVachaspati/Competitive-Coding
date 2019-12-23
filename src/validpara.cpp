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
	s.push(-1);
	int m=0;
	for(int i= 0; i<str.size(); i++)
	{
	    if(str[i]=='(')
		s.push(i);
	    else
	    {
		s.pop();
		if(!s.empty())
		{
		    m = max(m, i-s.top());
		}
		else
		{
		    s.push(i);
		}
	    }
	}
	cout<<m<<endl;
    }
}
