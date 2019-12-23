#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int a = (int)sqrt(n)+1;
    while(n%2==0)
	cout<<2<<endl,n/=2;
    for(int i=3;i<=a;i+=2)
	while(n%i==0)
	    cout<<i<<endl,n/=i;
    if(n>=2)cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n);
}
