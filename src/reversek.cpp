
struct node *reverse (struct node *head, int k)
{ 
    struct node* temp = head;
    struct node* temp1 = head;
    while(temp!=NULL)
    {
	stack<int> s;
	for(int i=0;i<k;i++)
	{
	    s.push(temp1->data);
	    if(temp1->next == NULL)
		break;
	    temp1 = temp1->next;
	}
	while(!s.empty())
	{
	    temp->data = s.top();
	    s.pop();
	    temp = temp->next;
	}
    }
    return head;
}
