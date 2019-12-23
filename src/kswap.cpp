#include <bits/stdc++.h>
using namespace std;

string ma(string ar,int k)
{
    if(k==0)return ar;
   int n=ar.size();
    string m = ar;
    for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
	    if(ar[j]>ar[i])
	    {
		swap(ar[i],ar[j]);
		string temp = ma(ar,k-1);
		if(temp>m)
		    m=temp;
		swap(ar[i],ar[j]);
	    }
	}
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int k;
	cin>>k;
	string str;
	cin>>str;
	cout<<ma(str,k)<<endl;
	
    }
}
