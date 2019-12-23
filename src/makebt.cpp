Node * newnode(char ch)
{
    Node * node = (Node*) malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = ch;
    return node;
}

int findright(string str, int i)
{
    stack<int> s;
    if(str[i] == '?')
	s.push(i);
    else if(str[i]==':')
    {
	int temp = s.top();
	s.pop();
	if(s.empty())return temp;
    }
    else
	i++;
}

Node *convertExpression(string str,int i)
{
    Node* node = newnode(str[i]);
    if(i==str.size()-1)
    {
	return node;
    }
    else if(str[i+1]=='?')
    {
	node->left = convertExpression(str,i+2);
	node->right = convertExpression(str,findright(str,i+1)+1);
	return node;
    }
    else if(str[i+1]==':' || str[i-1]==':')
    {
	return node;
    }
    
	
}
