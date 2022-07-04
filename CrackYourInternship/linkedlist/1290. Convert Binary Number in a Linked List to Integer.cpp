class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* temp=head;
        while(temp!=NULL){
            ans=2*ans;
            ans=ans+(temp->val); // ans= ans+ temp ka data * 2 ki power 0 
            temp=temp->next;
        }
        return ans;
    }
};
