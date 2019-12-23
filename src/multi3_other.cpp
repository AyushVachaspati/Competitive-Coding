#include <bits/stdc++.h>
using namespace std;

int bindiv(string str, int c)
{
    int odd=0, even=0;
    for(int i = str.size()-1;i>=0;i--)
    {
	if(i%2==0)
	{
	    str[i]=='1'?even++:even;
	}
	else
	{
	    str[i]=='1'?odd++:odd;
	}
    }
    return (even+2*odd)%3;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	if(bindiv(str,3)==0)
	    cout<<1<<endl;
	else
	    cout<<0<<endl;
    }
}
