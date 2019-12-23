#include <bits/stdc++.h>
using namespace std;

int lps(string str)
{
    int l[str.size()];
    int len=0;i=1;
    l[0]=0;
    while(i<n)
    {
	if(str[i] == str[len])
	    len++,l[i]=len,i++;
	else
	{
	    if(len==0)
		l[i]=len,i++;
	    else
		len=l[len-1];
	}
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	cout<<lps(str)<<endl;
    }
}
