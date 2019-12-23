{

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *createNewNode(int value)
{
    Node *temp=new Node;
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}
Node *newNode(Node *root,int data)
{
    if(root==NULL)
    root=createNewNode(data);
    else if(data<root->data)
    root->left=newNode(root->left,data);
    else
    root->right=newNode(root->right,data);
    
    return root;
}
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=newNode(root,arr[i]);
        }
        int l,h;
        cin>>l>>h;
        cout<<getCountOfNode(root,l,h)<<endl;
    
        
    }
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of a BST node is as follows:
struct Node
{
    int data;
    Node *left;
    Node *right;
};
*/
int getCountOfNode(Node *root, int l, int h)
{   
    int temp1=0,temp2=0;
    if(root->left!=NULL && root->data>=l)
        temp1 = getCountOfNode(root->left,l,h); 
    if(root->right!=NULL && root->data<=h)
        temp2 = getCountOfNode(root->right,l,h); 
    if( root->data < l || root->data > h)
	    return temp1+temp2;
	else 
	 return 1+temp1+temp2;
}
