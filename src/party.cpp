#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int entry[n];
	int exit[n];

	for(int i=0;i<n;i++)
	    cin>>entry[i];
	for(int i=0;i<n;i++)
	    cin>>exit[i];

	sort(entry,entry+n);
	sort(exit,exit+n);

	int i=0,j=0;

	int count=0;
	int mx = INT_MIN,time = -1;
	while(i<n)
	{
	    if(entry[i]<=exit[j])
	    {
		count++;
		if(count>mx)
		{
		    mx = count;
		    time = entry[i];
		}
		i++;		
	    }
	    else
	    {
		count--;
		j++;
	    }
	}
	cout<<mx<<" "<<time<<endl;
    }
}
