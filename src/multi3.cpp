#include <bits/stdc++.h>
using namespace std;

int modpow(int a, int pow,int c)
{
    if(pow == 0)
	return 1%c;
    if(pow == 1)
	return a%c;

    if(pow%2==0)
	return (modpow(a,pow/2,c)*modpow(a,pow/2,c))%c;
    else
	return (modpow(a,pow-1,c)*modpow(a,1,c))%c;
}


int bindiv(string str, int c, int pow)
{
    if(str.size()==1)
    {
	if(str[0]=='0')
	    return 0;
	else
	    return modpow(2,pow,c);
    }
    else
    {
	int a;
	if(str[0]=='0')
	    a = 0;
	else
	    a = modpow(2,pow,c);
	return (bindiv(str.substr(1),c,pow+1)+a)%c;
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
	reverse(str.begin(),str.end());
	if(bindiv(str,3,0)==0)
	    cout<<1<<endl;
	else
	    cout<<0<<endl;
    }
}