#include <bits/stdc++.h>
using namespace std;

bool balanced(string str)
{
    stack<char> s;
    for(int i=0;i<str.size();i++)
    {
	if(str[i]=='('||str[i]=='{'||str[i]=='[')
	    s.push(str[i]);
	else
	{
	    switch(str[i])
	    {
		case ')': if(s.empty())return false;
			      else if(s.top()!='(')return false;
			      else s.pop();
			      break;
		case '}': if(s.empty())return false;
			      else if(s.top()!='{')return false;
			      else s.pop();
			      break;
		case ']': if(s.empty())return false;
			      else if(s.top()!='[')return false;
			      else s.pop();
			      break;

	    }
	}
    }
    return s.empty();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	string str;
	cin>>str;
	if(balanced(str))
	    cout<<"balanced"<<endl;
	else
	    cout<<"not balanced"<<endl;
    }
}
