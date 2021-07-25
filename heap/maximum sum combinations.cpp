vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    priority_queue<int,vector<int>,greater<int>>q;
    int i,j;
    vector<int>v;
  int sum;
  sort(A.begin(),A.end(),greater<int>());
   sort(B.begin(),B.end(),greater<int>());
    for(i=0;i<C;i++)
    {
        for(j=0;j<C;j++)
        {
            sum=A[i]+B[j];
           
        if(q.size()<C)
            {
               q.push(sum);
               
            }
            else
            {
               if(q.top()<sum)
               {
                   q.pop();
                   q.push(sum);
               }
               else
               {
                   break;
               }
            }
        }
           
      
    }
    while(!q.empty())
    {
        v.push_back(q.top());
        q.pop();
    }
  
   reverse(v.begin(),v.end());
    return v;
}
