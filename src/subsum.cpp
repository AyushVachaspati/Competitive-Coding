#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
	int n;
	lli sum;
	scanf("%d %lld\n",&n,&sum);
	lli ar[n];
	int i=0;
	while(i!=n)
	{
	    scanf(" %lld ",&ar[i]);
	    i++;
	}
	i = 0;
	int j = 0;
	
	lli temp = ar[0];
	while(1)
	{
	    if(i>=n||j>=n||temp==sum)
		break;
	    if(sum > temp)
	    {
		j++;
		temp+=ar[j];
	    }
	    else if(sum < temp)
	    {
		temp-=ar[i];
		i++;
	    }
	}
	if(sum!=temp)
	    printf("-1\n");
	else
	    printf("%d %d\n",i+1,j+1);

    }
    return 0;
}
