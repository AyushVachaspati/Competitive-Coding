#include<bits/stdc++.h>
using namespace std;

void rev(string str, int i)
{
    int j = i;
    if(str.size()==i)return;
    while(1)
    {
	if(str[i]!='.')i++;
	else
	{
	    rev(str,i+1);
	    break;
	}
    }
    if(j==0)
	cout<<str.substr(j,i-j);
    else
    cout<<str.substr(j,i-j)<<".";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	rev(str+".",0);
	cout<<endl;
    }
}
