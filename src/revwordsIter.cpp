#include <bits/stdc++.h>
using namespace std;

void rever(string str)
{
    stack<string> s;
    int i=str.size();
    int j=str.size()-1;
    while(j>=0)
    {
	if(str[j]=='.')
	{
	    cout<<str.substr(j+1,i-j-1)<<'.';
	    i=j;
	    j--;
	}
	else
	{
	    j--;
	}
    }
    cout<<str.substr(j+1,i-j-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	rever(str);
	cout<<endl;
    }
}
