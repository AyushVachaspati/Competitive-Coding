bool hasPathSum(Node *node, int sum)
{
   if(node==NULL)return false;
   if(node->left==NULL && node->right==NULL)return sum==node->data;
   else
   {
       bool l=false,r=false;
       if(node->left != NULL)
       {
           l = hasPathSum(node->left,sum-node->data);
           if(l)return true;
       }
       if(node->right!=NULL)
       {
           r = hasPathSum(node->right,sum-node->data);
       }
       return l||r;
   }
   
}
