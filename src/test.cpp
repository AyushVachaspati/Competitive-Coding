#include <bits/stdc++.h>
using namespace std;

int count(int a)
{
    int c = 0;
    while(a)
    {
	c += a&1;
	a = a>>1;
    }
    return c;
}

int main()
{
    int x = INT_MAX;
    int a = count(x);
    cout<<a<<endl;
    int c = 0;
    int i = 0;
    while(c<a)
    {
	c+=count(i);
	i++;
    }
    i--;
    cout<<i<<endl;
    
}
