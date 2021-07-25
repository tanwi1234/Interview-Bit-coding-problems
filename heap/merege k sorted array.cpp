vector<int> Solution::solve(vector<vector<int> > &A) {
    int i,j;
    vector<int>v;
    
    priority_queue<int,vector<int>,greater<int>>q;
    for(i=0;i<A.size();i++)
    {
        for(j=0;j<A[i].size();j++)
        {
            q.push(A[i][j]);
        }
    }
    while(!q.empty())
    {
        v.push_back(q.top());
        q.pop();
    }
    return v;
}