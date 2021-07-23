int Solution::maxArea(vector<int> &A) {
    
    
    
    int i=0;
    int mn=0;
    int j=A.size()-1;
  
   
    while(i<j)
    {
     int height= min(A[i],A[j]);
    int base= j-i;
    int area=height*base;
    mn=max(mn,area);
    if(A[i]<A[j])
    {
        i++;
    }
    else 
    {
        j--;
    }
   
    
   }
    return mn;
}
