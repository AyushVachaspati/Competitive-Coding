void rightView(Node* node)
{
    queue<Node*> parents;
    queue<Node*> current;
    current.push(node);
    while(!parents.empty() || !current.empty())
    {
        while(!parents.empty())
        {
            Node * temp = parents.front();
            parents.pop();
            current.push(temp);
        }
        while(!current.empty())
        {
        
            Node* temp = current.front();
            if(current.size()==1)
		cout<<temp->data<<" ";
            current.pop();
            if(temp->left!=NULL)parents.push(temp->left);
            if(temp->right!=NULL)parents.push(temp->right);
        }
    }
}

