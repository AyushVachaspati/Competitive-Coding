#include <bits/stdc++.h>
using namespace std;

bool istrue(int ar[], int ar1[])
{
    for(int i=0;i<26;i++)
	if(ar[i]<ar1[i])return false;
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	string str1;
	cin>>str;
	cin>>str1;
	
	int ar[26]={0};
	int ar1[26] = {0};

	for(int i=0;i<str1.size();i++)
	    ar1[str1[i]-'a']++;

	int mini=0,minj=INT_MAX;
	int i=0,j=0;
	ar[str[0]-'a']++;
	while(j<str.size())
	{
	    if(istrue(ar,ar1))
	    {
		if(j-i < minj-mini)
		{
		    minj=j;
		    mini=i;
		}
		
		ar[str[i]-'a']--;
		i++;
	    }
	    else
	    {
		j++;
		ar[str[j]-'a']++;
		
	    }
		
	}
    
	if(minj == INT_MAX)
	    cout<<-1<<endl;
	else
	    cout<<str.substr(mini,minj-mini+1)<<endl;
	
    }
}
