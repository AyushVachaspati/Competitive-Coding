int memo[101][101];

int util(string A,string B,string C, int a,int b, int c)
{
    if(memo[i][j]!=-1)return memo[i][j];
    
    if(c==C.size())return memo[a][b]=1;
    if(A[a]==C[c] && B[b]==C[c])
	return memo[a][b] = util(A,B,C,a+1,b,c+1) || util(A,B,C,a,b+1,c+1);
    else if(A[a]==C[c])
	return memo[a][b] = util(A,B,C,a+1,b,c+1);
    else if(B[b]==C[c])
	return memo[a][b] = util(A,B,C,a,b+1,c+1);
    else 
	return memo[a][b]=0;

}

bool isInterleave(string A, string B, string C)
{
    if(A.size()+B.size()!=C.size())
	return false
    else
    {
	for(int i=0;i<101;i++)
	    for(int j=0;j<101;j++)
		memo[i][j]==-1;
	return util(A,B,C,0,0,0);
    }
}
