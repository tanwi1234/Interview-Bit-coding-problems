int Solution::diffPossible(vector<int> &A, int B) {
    
    
   int i;
   int j;
   for(i=0;i<A.size()-1;i++)
   {
    j=A.size()-1;
    while(j>i)
    {
        if(A[j]-A[i]==B)
        {
            return 1;
        }
        else if(A[j]-A[i]>B)
        {
            j--;
        }
        else if(A[j]-A[i]<B)
        {
          break;
        }
    }
   }
    return 0;
}