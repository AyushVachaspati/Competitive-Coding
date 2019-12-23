#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
struct Node *reverse(struct Node *head);
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}
/* Driver program to test above function*/
int main()
{
    int T,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
       head = reverse(head);
       printList(head);
       cout << endl;
    }
    return 0;
}


Node* reverse(Node *head)
{
    Node *temp = head;
    stack<Node *> s;
    s.push(NULL);
    while(temp!=NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    head = s.top();
    while(s.size()!=1)
    {
        temp = s.top();
        s.pop();
        temp->next = s.top();
    }
    
  return head;
}
