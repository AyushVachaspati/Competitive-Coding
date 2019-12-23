#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool possible(string str, string s)
{
    int i=0, j=0;
    if(s.size()>str.size())
	return false;
    while(i<str.size()&& j<s.size())
    {
	if(str[i]==s[j])
	    i++,j++;
	else
	    i++;
    }
    if(j==s.size())
	return true;
    return false;
}

string maxsize(string str, string ar[], int n)
{
    string word = "";
    for(int i=0;i<n;i++)
    {
	if(possible(str,ar[i]))
	{
	    if(ar[i].size()>word.size())
		word = ar[i];
	    
	}
    }
    return word;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	string ar[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i];
	string str;
	cin>>str;
	cout<<maxsize(str,ar,n)<<endl;
    }
}
