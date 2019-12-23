#include <bits/stdc++.h>

map<int, vector<int>> m;
void vert(Node* root, int n)
{
    if(root==NULL)return;

    m[n].push_back(root->data);
    vert(root->left,n-1);
    vert(root->right,n+1);
}

void print(vector<int>& v)
{
    auto it = v.begin();
    while(it!=v.end())
    {
	cout<<*it<<" ";
    }
}
void verticalOrder(Node *root)
{
    m.clear();
    vert(root,0);

    auto it = m.begin();
    while(it!=m.end())
    {
	print(*it);
	it++;
    }
    cout<<endl;
}
