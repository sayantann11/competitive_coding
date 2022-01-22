/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* prev=head;
        if(!head)return NULL;
        //if(temp)
        while(temp->next)
        {
            temp=temp->next;
            if(temp->val==val)
            {
                prev->next=temp->next;
            }
            else{
                prev=prev->next;
            }
                
        }if(head->val==val)return head->next;
        return head;
        
    }
};
