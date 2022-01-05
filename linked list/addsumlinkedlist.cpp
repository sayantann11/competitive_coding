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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* ansHead = new ListNode();
        ListNode* curr = ansHead;
        
        int carry = 0;
        
        while(l1 and l2){
            int sum = l1->val + l2->val + carry;
            
            int rem = sum % 10;
            
            carry = sum/10;
            
            curr->next = new ListNode(rem);
            
            curr = curr->next;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            int sum = l1->val + carry;
            
            int rem = sum % 10;
            
            carry = sum/10;
            
            curr->next = new ListNode(rem);
            
            curr = curr->next;
            
            l1 = l1->next;
        }
        while(l2){
            int sum = l2->val + carry;
            
            int rem = sum % 10;
            
            carry = sum/10;
            
            curr->next = new ListNode(rem);
            
            curr = curr->next;
            
            l2 = l2->next;
        }
        if(carry){
            curr->next = new ListNode(carry);
        }
        
        return ansHead->next;
    }
};
