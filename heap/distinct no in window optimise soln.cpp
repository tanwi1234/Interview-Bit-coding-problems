vector<int> Solution::dNums(vector<int> &arr, int B) {
    
    int i,j;
    map<int,int>m;
   vector<int>s;
   int count=0;
    for(i=0;i<B;i++)
    {
        if(m[arr[i]]==0)
        {
            count++;
        }
        m[arr[i]]++;
    }
    s.push_back(count);
    for(i=B;i<arr.size();i++)
    {
        if(m[arr[i-B]]==1)
        {
            count--;
        }
        m[arr[i-B]]=m[arr[i-B]]-1;
        
        if(m[arr[i]]==0)
        {
            count++;
        }
        m[arr[i]]++;
        s.push_back(count);
    }
    return s;
}