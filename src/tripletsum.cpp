
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++)
		cin>>arr[i];
    if(findTriplets(arr, n))
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
	}
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete the function below*/
bool findTriplets(int arr[], int n)
{ 

    sort(arr,arr+n);
    for(int i =0;i<n;i++)
	for(int j=i;j<n;j++)
	{
	    auto it = upper_bound(arr,arr+n,-(arr[i]+arr[j]));
	    if( *(it-1)== -(arr[i]+arr[j]) && (it-1)!=arr+i && (it-1)!=arr+j)
		return true;
	}
    return false;
}
