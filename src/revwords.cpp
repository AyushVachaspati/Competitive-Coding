#include <bits/stdc++.h>
using namespace std;

void rever(string str)
{
    int i = 0;
    string temp = "";
    while(i<str.size())
    {
	if(str[i]=='.')
	{

	    rever(str.substr(i+1));
	    cout<<".";
	    break;
	}
	else
	{
	    temp+= string(1,str[i]);
	    i++;
	}
    }
    cout<<temp;
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
