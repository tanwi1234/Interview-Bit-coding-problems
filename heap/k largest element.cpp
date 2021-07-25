vector<int> Solution::solve(vector<int> &A, int B) {
    int i;
    vector<int>s;
    priority_queue<int,vector<int>,greater<int>>minh;
    for(i=0;i<A.size();i++)
    {  minh.push(A[i]);
        
        if(minh.size()>B)
        {
            minh.pop();
        }
      
    }
    while(minh.size()>0)
    {
        s.push_back(minh.top());
        minh.pop();
    }
    return s;
}
