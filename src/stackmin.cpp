stack<int> mins;
void push(int a)
{
    if(s.empty())
    {
	s.push(a);
	mins.push(a);
    }
    else
    {
	mins.push(min(a,s.top()));
	s.push(a);
    }
     //add code here.
}
bool isFull(int n)
{
     return s.size()==n;
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
    int a = s.top();
    s.pop();
    mins.pop();
    return a;
}
int getMin()
{
   return mins.top();
}
