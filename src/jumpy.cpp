#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
set<lli> s;
int c = 0;
void populate(string str,lli n)
{
    c++;
    if(stol(str)>n)
    {
	return;
    }
    else
    {
	switch(str[0])
	{
	    case '0': s.insert(stol(str));
		      populate("1"+str,n);
		      break;

	    case '1': s.insert(stol(str));
		      populate("0"+str,n);
		      populate("2"+str,n);
		      break;

	    case '2': s.insert(stol(str));
		      populate("1"+str,n);
		      populate("3"+str,n);
		      break;

	    case '3': s.insert(stol(str));
		      populate("2"+str,n);
		      populate("4"+str,n);
		      break;

	    case '4': s.insert(stol(str));
		      populate("3"+str,n);
		      populate("5"+str,n);
		      break;

	    case '5': s.insert(stol(str));
		      populate("4"+str,n);
		      populate("6"+str,n);
		      break;

	    case '6': s.insert(stol(str));
		      populate("5"+str,n);
		      populate("7"+str,n);
		      break;

	    case '7': s.insert(stol(str));
		      populate("6"+str,n);
		      populate("8"+str,n);
		      break;
	    case '8': s.insert(stol(str));
		      populate("7"+str,n);
		      populate("9"+str,n);
		      break;
	    case '9': s.insert(stol(str));
		      populate("8"+str,n);
		      break;
	    default: cout<<"Invalid"<<endl;
		     break;
	}
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<10;i++)
	populate(to_string(i),1000000000+1000);
    while(t--)
    {
	int n;
	cin>>n;
	auto it = s.begin();
	while(*it<=n && it!=s.end())
	{
	    printf("%lld ",*it);
	    it++;
	}
	cout<<endl;
    }
}
