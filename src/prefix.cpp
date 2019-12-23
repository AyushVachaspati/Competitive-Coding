#include <bits/stdc++.h>
using namespace std;

struct node;

typedef struct node{
    char ch;
    struct node *child[26];
    bool leaf;
   node(char c)
    {
	leaf =false;
	ch = c;
	for(int i=0;i<26;i++)
	    child[i]=NULL;
    }
} node;

void insertrie(string str, node* head)
{
    node* temp = head;
    for(int i=0;i<str.size();i++)
    {
	if(temp->child[str[i]-'a']!=NULL)
	    temp = temp->child[str[i]-'a'];
	else
	{
	    node* n = new node(str[i]);
	    temp->child[str[i]-'a'] = n;
	    temp = n;
	}
    }
    temp->leaf = true;
}


int count(node* head)
{
    int count=0;
    int index = -1;
    for(int i=0;i<26;i++)
	if(head->child[i]!=NULL){
	count++;
	index = i;
	}

    if(count==1)return index;
    else
	return -1;
}


void printprefix(node* head)
{
    node* temp = head;
    bool flag = false;
    
    while(1){
	
	if(temp->leaf)break;
	int a = count(temp);
	if(a==-1)
		break;
	else
	{
	    flag = true;
	    temp = temp->child[a];
	    cout<<temp->ch;
	}
    }

    if(!flag)cout<<-1;
    cout<<endl;
}

void del(node* head)
{
    if(head==NULL)return;
    
    for(int i=0;i<26;i++)
	del(head->child[i]);

    delete(head);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	node* head = new node(0);	
	int n;;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    string str;
	    cin>>str;
	    insertrie(str,head);
	}
	printprefix(head);
	del(head);
    }
}
