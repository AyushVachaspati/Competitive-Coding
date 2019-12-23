#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
    if(a==0)return b;
    if(b==0)return a;
    if(a<b)return hcf(a,b%a);
    else return hcf(b,a%b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<hcf(a,b)<<endl;
}
