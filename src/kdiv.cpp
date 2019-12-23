#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)
	    cin>>v[i];

	int k;
	cin>>k;

	int ar[k]={0};

	for(int i=0;i<v.size();i++)
	    ar[v[i]%k]++;

	if(ar[0]%2==1)
	{
	    cout<<"False"<<endl;
	    continue;
	}
	
	if(k%2)
	{
	    bool flag = true;
	    //odd
	    for(int i=1;i<=k/2;i++)
		if(ar[i]!=ar[k-i])
		{
		    flag = false;
		    cout<<"False"<<endl;
		    break;
		}
	    if(flag)
		cout<<"True"<<endl;

	}
	else
	{
	     bool flag = true;
	    //odd
	    for(int i=1;i<k/2;i++)
		if(ar[i]!=ar[k-i])
		{
		    flag = false;
		    cout<<"False"<<endl;
		    break;
		}
	    if(flag && ar[k/2]%2==1)
	    {
		cout<<"False"<<endl;
		flag =false;
	    }
	    if(flag )
		cout<<"True"<<endl;
	}
    }
}
