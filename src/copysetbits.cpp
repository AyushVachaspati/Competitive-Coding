#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,l,r,y;
        cin>>x>>l>>r>>y;
        int temp = 0;
        for(int i=l-1;i<r;i++)
            temp = temp | 1<<i;
        temp = temp&y;
        x = x|temp;
        cout<<x<<endl;
    }
}
