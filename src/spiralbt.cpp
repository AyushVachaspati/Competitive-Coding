
void printSpiral(Node *root)
{
     bool flag  = true;
     
     if(!root)return;
     
     stack<Node *> s1,s2;
     cout<<root->data<<endl;
     s1.push(root);
     while(!s1.empty() || !s2.empty())
     {
	if(flag)
	{
	    flag = !flag;
	    while(!s1.empty())
	    {
		Node * temp = s1.top();
		s1.pop();
		if(temp->left)
		    s2.push(temp->left), cout<<temp->left->data<<" ";
		if(temp->right)
		    s2.push(temp->right), cout<<temp->right->data<<" ";
	    }
	}
	else
	{
	    flag = !flag;
	     while(!s2.empty())
	    {
		Node * temp = s2.top();
		s2.pop();
		if(temp->right)
		    s1.push(temp->right), cout<<temp->right->data<<" ";
		if(temp->left)
		    s1.push(temp->left), cout<<temp->left->data<<" ";
	    }

	}
     }
}
