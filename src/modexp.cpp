#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli modexp(lli a, lli p,lli c)
{
    
    if(p==0)
        return 1%c;
    else if(p==1)
        return a%c;
    
    else
    {
        if(p%2==0)
            return (modexp(a,p/2,c)*modexp(a,p/2,c))%c;
        else
            return (modexp(a,1,c)*modexp(a,p-1,c))%c;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    lli ar[n];
	    lli mini = INT_MAX;
	    lli maxi = INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        mini = min(mini,ar[i]);
	        maxi = max(maxi,ar[i]);
	        
	    }
	    int count1=0,count2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i]==mini)count1++;
	        if(ar[i]==maxi)count2++;
	    }
	    lli ans1 = modexp(2,count1,1000000000+7)-1;
	    lli ans2 = modexp(2,count2,1000000000+7)-1;
	    cout<<ans2<<" "<<ans1<<endl;
	}
	return 0;
}
