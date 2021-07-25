vector<int> Solution::dNums(vector<int> &arr, int B) {
    
    int i,j;
    map<int,int>m;
   
    vector<int>s;
  
   int k;
    vector<int>q;
    i=0;
    // initialize distinct element count for current window
  while(j<arr.size())
  {
      s.push_back(arr[j]);
      if(j-i+1==B)
      {
          for(k=i;k<=j;k++)
          {
              m[s[k]]++;
          }
         q.push_back(m.size());
         m.clear();
         i++;
         j++;
      }
      else if(j-i+1<B)
      {
          j++;
      }
  }
  return q;
}
