#include <bits/stdc++.h>
using namespace std;

bool ispower(int y, int x)
{
    if(x==1 || x==0) return y==x;
    while(y%x==0 && y>0)
	y=y/x;
    if(y==1)
	return 1;
    else
	return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int x,y;
	cin>>x>>y;
	cout<<ispower(y,x)<<endl;
    }
}
