#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
	if(i%3 && i%5) cout<<i;
	if(i%3==0)cout<<"Fizz";
	if(i%5==0)cout<<"Buzz";
	cout<<endl;
	i++;
    }
}
