map<pair<string,int>,bool> m;

bool ispal(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j){
	if(s[i]!=s[j])return false;
	i++,j--;}
    return true;
}

bool is_k_palin1(string s,int k)
{
    
    int i =0;
    int j = s.size()-1;
    bool flag=true;
    if(m.find(make_pair(s,k))!=m.end())return m[make_pair(s,k)];

    if(s.size()==0)return true;
    if(k<0)return false;
    if(k==0)return ispal(s);
    
    while(i<j)
    {
	if(s[i]==s[j])
	    i++,j--;
	else
	{
	    flag = false;
	    break;
	}
    }
    if(flag)
	return m[make_pair(s,k)] = true;
    else
    {
	bool temp = is_k_palin1(s.substr(i,j-i),k-1) || 
	    is_k_palin1(s.substr(i+1,j-i),k-1)||
		is_k_palin1(s.substr(i+1,j-i-1),k-2);
	return m[make_pair(s,k)] = temp;
    }
}

bool is_k_palin(string s, int k)
{
    m.clear();
    return is_k_palin1(s,k);
}
