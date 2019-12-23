int m;
int maxDiff1(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    else
    {
        int minleft = INT_MAX,minright=INT_MAX;
        if(root->left!=NULL)
            minleft = maxDiff1(root->left);
        if(root->right!=NULL)
            minright = maxDiff1(root->right);
            
        int mini = min(minleft, minright);
        m = max(m,root->data - mini);
        mini = min(mini,root->data);
        
        return mini;
    }
    
}

int maxDiff(Node* root)
{
    m = INT_MIN;
    maxDiff1(root);
    return m;
}
