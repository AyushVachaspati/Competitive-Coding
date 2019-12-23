#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int memo[1000];

int decoding(string str)
{
    int n = str.size();
    if(memo[n]!=-1)
	return memo[n];
    if(str.size()==0)
	return memo[n] = 1;
    int temp1=0,temp2=0;
    if(stoi(string (1,str[0]))>=1 && stoi(string (1,str[0]))<=9)
	temp1 = decoding(str.substr(1));
    if(str.size()>1 && stoi(str.substr(0,2))>=10 && stoi(str.substr(0,2))<=26)
	temp2 = decoding(str.substr(2));
    return memo[n]= temp1+temp2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	for(int i=0;i<100;i++)
	    memo[i]=-1;
	string str;
	cin>>str;
	cout<<decoding(str)<<endl;
    }
}
