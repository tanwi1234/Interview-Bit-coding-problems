int Solution::solve(vector<int> &A, int B) {
    
    priority_queue<int>q;
    int i;
    for(i=0;i<A.size();i++)
    {
        
        q.push(A[i]);
        
    }
    int sum=0;
  while(B)
  {
      int temp=q.top();
      q.pop();
      sum=sum+temp;
      temp--;
      q.push(temp);
      B--;
  }
    return sum;
}