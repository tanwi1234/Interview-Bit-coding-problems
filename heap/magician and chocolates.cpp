int Solution::nchoc(int A, vector<int> &B) {
    
    int sum=0;
int i;
int mod=1000000007;
    priority_queue<int>q;
    for(i=0;i<B.size();i++)
    {
        q.push(B[i]);
    }
    while(A)
    {
        int temp=q.top();
        
        q.pop();
        sum=(sum%mod)+(temp%mod);
        sum=sum%mod;
        q.push(floor(temp/2));
        A--;
        
    }
    return sum;
}