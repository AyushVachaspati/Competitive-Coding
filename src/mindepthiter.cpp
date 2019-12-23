/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/*You are required to complete this method*/
int minDepth(Node *node)
{
    if(node->left==NULL && node->right==NULL)
	return 1;
    queue<Node*> parents;
    queue<Node*> current;
    parents.push(node);
    int height = 1;
    while(!parents.empty() || !current.empty())
    {
	while(!parents.empty())
	{
	    Node * temp = parents.front();
	    parents.pop();
	    if(temp->left!=NULL)
		current.push(temp->left);
	    if(temp->right!=NULL)
		current.push(temp->right);
	}
	height++;
	while(!current.empty())
	{
	    Node* temp = current.front();
	    current.pop();
	    if(temp->left==NULL && temp->right==NULL)
	    {
		return height;
	    }
	    parents.push(temp);
	}
    }

}
