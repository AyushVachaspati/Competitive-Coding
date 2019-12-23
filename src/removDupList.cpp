Node *removeDuplicates(Node *root)
{
    Node * temp = root;
    while(temp->next!=NULL)
    {
        if(temp->data == temp->next->data)
	{
	    Node * del = temp->next;
            temp->next = temp->next->next;
	    free(del);
	}
        else
            temp = temp->next;
        
    }
    return root;
}
