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
    if(node==NULL)return 0;
    if(node->left==NULL && node->right==NULL)
	return 1;
    else
    {
	int left=0, right=0;
	if(node->left!=NULL)
	    left = minDepth(node->left);
	if(node->right!=NULL)
	    right = minDepth(node->right);
	return 1+min(right,left);
    }

}
