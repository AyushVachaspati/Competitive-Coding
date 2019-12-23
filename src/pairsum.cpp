#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	bool flag = false;
	int n,m,x;
	cin>>n>>m>>x;
	int ar[n];
	int ar1[m];
	for(int i=0;i<n;i++)
	    scanf(" %d ",&ar[i]);
	for(int i=0;i<m;i++)
	    scanf(" %d ",&ar1[i]);

	sort(ar,ar+n);
	sort(ar1,ar1+m);
	for(int i=m-1;i>=0;i--)
	{
	    int b = x-ar1[i];
	    auto temp = upper_bound(ar,ar+n,b)-1;
	    if(*temp == b)
	    {
		if(flag)
		    printf(", %d %d",*temp,ar1[i]);
		else
		{
		    flag = true;
		    printf("%d %d",*temp,ar1[i]);
		    
		}

	    }
	}
	    if(flag)
		cout<<endl;
	    else
		cout<<-1<<endl;


    }
}
