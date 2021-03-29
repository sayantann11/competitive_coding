Partition List
Problem Description

Given a linked list A and a value B, partition it such that all nodes less than B come before nodes greater than or equal to B.

You should preserve the original relative order of the nodes in each of the two partitions.



Problem Constraints
1 <= |A| <= 106

1 <= A[i], B <= 109



Input Format
The first argument of input contains a pointer to the head to the given linked list.

The second argument of input contains an integer, B.



Output Format
Return a pointer to the head of the modified linked list.



Example Input
Input 1:

A = [1, 4, 3, 2, 5, 2]
B = 3
Input 2:

A = [1, 2, 3, 1, 3]
B = 2


Example Output
Output 1:

[1, 2, 2, 4, 3, 5]
Output 2:

[1, 1, 2, 3, 3]


Example Explanation
Explanation 1:

 [1, 2, 2] are less than B wheread [4, 3, 5] are greater than or equal to B.
Explanation 2:

 [1, 1] are less than B wheread [2, 3, 3] are greater than or equal to B.
class Solution {
    public:
        ListNode *partition(ListNode *head, int x) {

            if (!head) return NULL;
            ListNode * iterator = head; 

            ListNode * start = new ListNode(0); // list of nodes greater than x
            ListNode * tail = start;

            ListNode * newHead = new ListNode(0); 
            newHead -> next = head;
            ListNode * pre = newHead; // previous node, we need it for removing


            while (iterator) {
                if (iterator -> val >= x) {
                    pre -> next = iterator -> next; // remove from our list
                    tail -> next = iterator; // add to list of nodes greater than x
                    tail = tail -> next;
                    iterator = iterator -> next;
                    tail -> next = NULL;
                }
                else
                    pre = iterator, iterator = iterator -> next;
            }
            pre -> next = start -> next;
            return newHead -> next;
        }
};
