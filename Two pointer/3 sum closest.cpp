int Solution::threeSumClosest(vector<int> &A, int B) {
    
    
    int i,j,k;
    int n=A.size();
    vector<int>s;
    int max=INT_MAX;
    int sum;
    int t=-1;
    sort(A.begin(),A.end());
    for(i=0;i<n-2;i++)
    {
        j=i+1;
        k=n-1;
       while(j<k)
       {
               sum=(A[i])+(A[j])+(A[k]);
               if(max>abs(sum-B))
               {
                   max=abs(sum-B);
                   t=sum;
                   
               }
               if(max==0)
               {
                   return t;
               }
                else if(sum-B>0)
               {
                   k--;
               }
               else 
               {
                   j++;
               }
              
           
       }
        
    }
    return t;
   
}
