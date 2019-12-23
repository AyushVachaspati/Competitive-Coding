#include <bits/stdc++.h>
using namespace std;

void fibseq(vector<int> &v, int k)
{
    int a = 0;
    int b = 1;
    v.push_back(a);
    v.push_back(b);
    while(b<=k)
    {
	int temp = b;
	b = a+b;
	a = temp;
	v.push_back(b);
    }

}

int main()
{
    int t;
    cin>>t;
    vector<int> v;
    fibseq(v,10000);
    while(t--)
    {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int temp;
	    cin>>temp;
	    if(binary_search(v.begin(),v.end(),temp))
		cout<<temp<<" ";
	}
	cout<<endl;
    }
}
