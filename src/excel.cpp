#include <bits/stdc++.h>
using namespace std;

string ans(int n)
{
    if(n==0)return "";
    if(n%26==0)
    {
	return ans(n/26 - 1)+"Z"; 
    }
    else
    {
	string s = "A";
	s[0] = s[0]+(n%26-1);
	return ans(n/26) + s;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<ans(n)<<endl;
    }
}
