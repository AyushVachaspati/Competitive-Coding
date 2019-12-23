#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,m;
	cin>>n>>m;
	double a = pow(m,1.0/n);
	int t = round(a);
	
	if(pow(t,n)==m)
	    cout<<a<<endl;
	else
	    cout<<-1<<endl;
    }
}
