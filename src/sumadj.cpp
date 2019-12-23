#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli sumadj(lli ar[], int n)
{
    if(n==1)return ar[0];
    if(n==2)return max(ar[0],ar[1]);

    lli inc[n]={0},exc[n]={0};

    lli m;
    inc[0] = ar[0];
    exc[0] = 0;
    m = ar[0];
    inc[1] = ar[1];
    m=max(ar[1],m);
    exc[1] = ar[0];
    for(int i=2;i<n;i++)
    {
	exc[i] = max(inc[i-1],exc[i-1]);
	m = max(m,exc[i]);
	inc[i] = exc[i-1]+ar[i];
	m=max(m,inc[i]);
    }
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	lli ar[n];
	for(int i=0;i<n;i++)
	    cin>>ar[i];
	cout<<sumadj(ar,n)<<endl;
    }
}
