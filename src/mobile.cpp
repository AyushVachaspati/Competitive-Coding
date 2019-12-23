#include <bits/stdc++.h>
using namespace std;

typedef struct rel
{
    long long t;
    long long x;
    long long delta;
    bool called;
} rel;
bool comp1(rel a, rel b)
{
    if(a.t==b.t)
    return a.delta>b.delta;
    else return a.t<b.t;
}

bool comp2(rel a, rel b)
{
    if(a.t==b.t)
    return a.delta > b.delta;
    else return a.t>b.t;
}

bool isneg(vector<rel>&v, long long m)
{
    for(int i=0;i<v.size();i++)
    {
	m-=v[i].t;
	if(m<0)return 1;
	m+=v[i].x;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    vector<rel> v(n);
    for(int i=0;i<n;i++)
    {
	cin>>v[i].t>>v[i].x;
	v[i].delta = v[i].x-v[i].t;
	v[i].called = false;
    }
    sort(v.begin(),v.end(),comp1);


    int m;
    int bal=0;

    for(int i=0;i<n;i++)
    {
	if(v[i].delta>=0)
	{
	    bal-=v[i].t;
	    v[i].called=1;
	    m = min(m,bal);
	    bal+=v[i].x;
	}	    
    }

    sort(v.begin(),v.end(),comp2);
    for(int i =0;i<n;i++)
    {
	if(v[i].called==false)
	{
	    bal-=v[i].t;
	    m = min(m,bal);
	    bal+= v[i].x;
	}
    }
    cout<<-m<<endl;

}
