#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    int count=0;
    while(n = (n&(-n))^n)
    {
	count++;
    }
    return count+1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<count(n)<<endl;
    }
}
