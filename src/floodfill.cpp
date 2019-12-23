

void floodfill(int ar[MAX][MAX],int n, int m, int i, int j, int a)
{
    if(i<0||j<0||i>=n||j>=m)return;
    if(ar[i][j]!=a)return;
    else
    {
        ar[i][j]=0;
        floodfill(ar,n,m,i+1,j,a);
        floodfill(ar,n,m,i-1,j,a);
        floodfill(ar,n,m,i,j+1,a);
        floodfill(ar,n,m,i,j-1,a);
        floodfill(ar,n,m,i+1,j+1,a);
        floodfill(ar,n,m,i+1,j-1,a);
        floodfill(ar,n,m,i-1,j+1,a);
        floodfill(ar,n,m,i-1,j-1,a);
    }
    
}
int findIslands(int A[MAX][MAX], int N, int M)
{
    int count=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            if(A[i][j]==1)
            {
                floodfill(A,N,M,i,j,1);
                count++;
            }
        }
        return count;
}
