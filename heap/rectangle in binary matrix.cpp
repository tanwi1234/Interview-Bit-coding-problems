int Solution::solve(const vector<vector<int> > &A) {
    int i,j,x,y;
    
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[i].size();j++)
        {
            if(A[i][j]==1)
            {
                for( x=i+1;x<A.size();x++)
                {
                    for(y=j+1;y<A[i].size();y++)
                    {
                        if(A[i][y]==1 && A[x][j]==1 && A[x][y]==1)
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
    
}
