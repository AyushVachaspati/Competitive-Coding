#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,k;
	multiset<int,greater<int>> s;
	cin>>n>>k;
	int i=0;
	int ar[n];
	for(i=0;i<k;i++)
	{
	    cin>>ar[i];
	    s.insert(ar[i]);
	}
	cout<<*(s.begin())<<" ";
	for(;i<n;i++)
	{
	    cin>>ar[i];
	    s.insert(ar[i]);
	    

	    //iterator is used to erase only one occurence of the value
	    auto temp = s.find(ar[i-k]);
	    s.erase(temp);

	    cout<<*(s.begin())<<" ";
	}
	cout<<endl;



    }
}
