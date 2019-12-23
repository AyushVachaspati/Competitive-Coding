#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int memo[11][51];

int eggdrop(int n,int k)
{
    if(memo[n][k]!=-1)return memo[n][k];
    if(n==1)return k;
    if(k==0)return 0;
    if(k==1)return 1;

    int ma = INT_MAX;
    for(int i =1;i<=k;i++)
    {
	int a = max(eggdrop(n-1,i-1), eggdrop(n,k-i))+1;
	ma = min(ma,a);
    }
    return memo[n][k]=ma;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,k;
	cin>>n>>k;
	for(int i=0;i<11;i++)
	    for(int j=0;j<51;j++)
		memo[i][j]=-1;
	cout<<eggdrop(n,k)<<endl;
    }
}
