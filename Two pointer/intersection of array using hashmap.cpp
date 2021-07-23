vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    vector<int>s;
    int i,j;
   map<int,int>m;
    for(i=0;i<A.size();i++)
    {
        m[A[i]]++;
    }
    for(i=0;i<B.size();i++)
    {
        if(m[B[i]]>0)
        {
            s.push_back(B[i]);
            m[B[i]]--;
        }
    }
    return s;
   
    
}