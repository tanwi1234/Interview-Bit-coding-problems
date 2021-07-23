void Solution::merge(vector<int> &arr1, vector<int> &arr2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


int i = 0, j = 0;
 vector<int>arr3;
 int n1=arr1.size();
 int n2=arr2.size();
    
    while (i<n1 && j <n2)
    {
      
        if (arr1[i] < arr2[j])
            arr3.push_back(arr1[i++]);
        else
            arr3.push_back(arr2[j++]);
    }
 
    
    while (i < n1)
        arr3.push_back(arr1[i++]);
 
    
    while (j < n2)
    {
        arr3.push_back(arr2[j++]);
    }
    arr1.clear();
    for(i=0;i<arr3.size();i++)
    {
        arr1.push_back(arr3[i]);
    }
        
        
    
    
    
}