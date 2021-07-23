int Solution::removeDuplicates(vector<int> &A) {
   
int i;
vector<int>s;
int cur=0;
    for(i=0;i<A.size()-1;i++)
    {
        if(A[i+1]!=A[i])
        {
            cur++;
            A[cur]=A[i+1];
        }
        
    }
    A.erase(A.begin()+cur+1,A.end());
    return A.size();
    
}