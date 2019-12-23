
bool issorted(vector<int> v)
{
    int n = v.size();
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])return false;
    }
    return true;
}
void traverse(Node* root,vector<int> &v)
{
    if(root==NULL)return;
    if(root->left!=NULL)traverse(root->left,v);
    v.push_back(root->data);
    if(root->right!=NULL)traverse(root->right,v);
}
bool isBST(Node* root) {
    vector<int> v;
    traverse(root,v);
    return issorted(v);
}

