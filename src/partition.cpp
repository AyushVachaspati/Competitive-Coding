#include <bits/stdc++.h>
using namespace std;

int partition(int ar[],int i, int j, int k)
{
    while(i<j)
    {
	if(ar[i]>k)
	{
	    
	    while(ar[j]>k && j>i)
		j--;
	    int temp = ar[j];
	    ar[j] = ar[i];
	    ar[i] = temp;
	}
	else
	    i++;
    }
    return i;
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
	    cin>>ar[i];
	int a,b;
	cin>>a>>b;
	int k = partition(ar,0,n-1,a-1);
		for(int i=0;i<n;i++)
	    cout<<ar[i]<< " ";
	cout<<endl;
 
	partition(ar,k,n-1,b);
	
	for(int i=0;i<n;i++)
	    cout<<ar[i]<< " ";
	cout<<endl;
    }
}
