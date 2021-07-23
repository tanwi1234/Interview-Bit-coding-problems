vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    
    vector<int>s;
    int i,j;
    i=0;
    j=0;
   while(i<A.size() && j<B.size())
   {
       if(A[i]==B[j])
       {
           s.push_back(B[j]);
           i++;
           j++;
       }
       else if(A[i]>B[j])
       {
           j++;
       }
       else if(A[i]<B[j])
       {
           i++;
       }
   }
    return s;
   
    
}
