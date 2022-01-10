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
    int len(ListNode* head) {
    int l=0;
    while(head) {
        head = head->next;
        l++;
    }
    return l;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(!head or !head->next or k<=1) return head;
    if(len(head) >= k) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* nn;
        int count = 0;
        while(cur and count<k) {
            nn = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nn;
            count++;
        }
        count = 0;
        if(nn)
            head->next = reverseKGroup(nn, k);
        return prev;
    }
    else return head;
}
};
