#include <bits/stdc++.h>
using namespace std;

int countdigit(string str)
{
    int i =0;
    char test = str[0];
    for( i =0;i<str.size();i++)
	if(str[i]!=test)
	    break;
    if(i)
	return i;
    else
	return 1;
}

string lns(int n)
{
    string str = "1";
    while(n>1)
    {
	n--;
	string temp = "";
	
	while(str.size()!=0)
	{
	    int count = countdigit(str);
	    temp = temp+to_string(count)+ string (1,str[0]);
	    
	    if(count>=str.size())break;
	    else
		str = str.substr(count);
	}
	str = temp;
    }
    return str;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
	cout<<lns(n)<<endl;
    }
}
