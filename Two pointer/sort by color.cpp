void Solution::sortColors(vector<int> &A) {
    
    
    int i;
    int l=0;
    int h=A.size()-1;
    int r=A.size();
    int Arr[A.size()];
    for(i=0;i<A.size();i++)
    {
       if(A[i]==0)
       {
           Arr[l]=0;
           l++;
       }
       else if(A[i]==2)
       {
           Arr[h]=2;
           h--;
       }
    
    }
    for(i=l;i<=h;i++)
    {
        Arr[i]=1;
    }
    
    A.clear();
    for(i=0;i<r;i++)
    {
        A.push_back(Arr[i]);
    }
    
}
