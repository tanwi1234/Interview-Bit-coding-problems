int Solution::removeDuplicates(vector<int> &A) {
    
int i;
vector<int>s;
    for(i=0;i<A.size();i++)
    {
        bool found=true;
        int j=A.size()-1;
        while(j>i)
        {
            if(A[j]==A[i])
            {
                found=false;
                break;
            }
            j--;
        }
        if(found==true)
        {
            s.push_back(A[i]);
        }
    }
    A.clear();
    for(i=0;i<s.size();i++)
    {
        A.push_back(s[i]);
    }
    return A.size();
}