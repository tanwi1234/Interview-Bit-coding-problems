void Solution::merge(vector<int> &A, vector<int> &B) {
    


int i=0;
while(A[A.size()-1]>B[0])
{
    if(A[i]>B[0])
    {
        swap(A[i],B[0]);
        sort(B.begin(),B.end());
    }
    i++;
}
for(i=0;i<B.size();i++)
{
    A.push_back(B[i]);
}
    
    
    
    
}
