ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<int,vector<int>,greater<int>>q;
        ListNode* temp;
        for(ListNode* i:A)
        {
            temp=i;
             while(temp!=NULL)
        {
            q.push(temp->val);
            temp=temp->next;
        }
        }
       ListNode* newnode= new ListNode(0);
       temp=newnode;
        while(!q.empty())
        {
            
            int v=q.top();
            temp->next= new ListNode(v);
            q.pop();
            temp=temp->next;
        }
        return newnode->next;
    
    
    
}
