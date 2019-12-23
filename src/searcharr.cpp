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
	int ar[n];
	for(int i =0;i<n;i++)
	{
	    scanf(" %d ",&ar[i]);
	}
	int index;
	for(index =0;index<n-1;index++)
	    if(ar[index]>ar[index+1])break;
	int x;
	cin>>x;

	if(binary_search(ar,ar+index+1,x))
	{
	    cout<<(upper_bound(ar,ar+index+1,x)-1)-ar<<endl;
	}
	else if(binary_search(ar+index+1,ar+n,x))
	{
	    cout<<(upper_bound(ar+index+1,ar+n,x)-1)-ar<<endl;
	}
	else
	{
	    cout<<-1<<endl;
	}

    }
}
