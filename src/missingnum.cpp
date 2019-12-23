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
	long long int sum = (n*(n+1))/2;
	n--;
	while(n--)
	{
	    int temp;
	    cin>>temp;
	    sum -= temp;
	}
	cout<<sum<<endl;
    }
}
