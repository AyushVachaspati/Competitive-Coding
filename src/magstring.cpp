#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
lli c = 1000000000+7;


lli mul(lli a,lli b)
{
    return ((a%c) * (b%c) )%c;
}

lli diff(lli a, lli b)
{
    return ((a%c)-(b%c))%c;
}
lli power(lli a, lli b)
{
    if(b==1)return a%c;
    if(b==0)return 1%c;
    if(b%2)
	return ((power(a,b-1)%c)*(a%c))%c;
    else
    {
	lli ans = power(a,b/2)%c;
	return (ans*ans)%c;
    }
}

lli ansnonzero(lli n,lli odd, lli even)
{
    lli a = mul(power(odd+even, n-1),even);
    lli b = power(even,n);
    return diff(a,b);
}

lli anszero(lli n,lli odd, lli even)
{
    lli a = mul(mul(power(odd+even,n-2),even),(odd+even-1));
    lli b = mul(power(even,n-1),even-1);
    return diff(a,b);
}

lli ans(lli n, lli odd, lli even , bool zero)
{
    if(zero)return anszero( n, odd,  even);
    else return ansnonzero( n, odd,  even);
}

int main()
{
    cout<<power(4,5)<<endl;
    string str;
    cin>>str;
    int ar[10] = {0};
    lli even=0;
    lli odd=0;
    for(int i=0;i<str.size();i++)
	ar[str[i]-'0']++;
    for(int i=0;i<10;i++)
	if(ar[i])
	    if(i%2)odd++;
	    else even++;
    int q;
    cin>>q;
    while(q--)
    {
	lli n;
	cin>>n;
	cout<<ans(n,odd,even,bool(ar[0]))<<endl;
    }

}

