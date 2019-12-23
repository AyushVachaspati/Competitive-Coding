#include <bits/stdc++.h>
using namespace std;

bool meetinmiddle(int ar[],int n, int sum)
{
    //requires array to be sorted
    int i=0;
    int j=n-1;
    while(i<j)
    {
	int temp = ar[i]+ar[j];
	if(temp==sum)return true;
	else if(temp>sum)j--;
	else i++;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    ar[i] *= ar[i];
	}
	sort(ar,ar+n);
	int flag = 0;
	for(int i = n-1;i>=2;i--)
	{
	    if(meetinmiddle(ar,i,ar[i]))
	    {
		cout<<"Yes"<<endl;
		flag = 1;
		break;
	    }
	}
	if(!flag)
	    cout<<"No"<<endl;

    }
}
