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
    ListNode* SortedMerge(ListNode* a, ListNode* b)
{
    ListNode* result = NULL;
     
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    if(a->val<=b->val)
    {
        result=a;
        result->next=SortedMerge(a->next,b);
    }
    else
    {
        result=b;
        result->next=SortedMerge(a,b->next);
    }
    return result;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       return SortedMerge(list1,list2);
    }
};
