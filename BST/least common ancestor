Least Common Ancestor
Problem Description

Find the lowest common ancestor in an unordered binary tree A given two values B and C in the tree.

Lowest common ancestor : the lowest common ancestor (LCA) of two nodes and w in a tree or directed acyclic graph (DAG) is the lowest (i.e. deepest) node that has both v and w as descendants.



Problem Constraints
1 <= size of tree <= 100000

1 <= B, C <= 109



Input Format
First argument is head of tree A.

Second argument is integer B.

Third argument is integer C.



Output Format
Return the LCA.



Example Input
Input 1:

 
      1
     /  \
    2    3
B = 2
C = 3
Input 2:

      1
     /  \
    2    3
   / \
  4   5
B = 4
C = 5


Example Output
Output 1:

 1
Output 2:

 2


Example Explanation
Explanation 1:

 LCA is 1.
Explanation 2:

 LCA is 2.
 
 solution:
 /**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode * LCA(TreeNode * root, int val1, int val2) {
    if (!root)
        return NULL;
    if (root -> val == val1 || root -> val == val2) 
        return root;
    TreeNode * L = LCA(root -> left, val1, val2);
    TreeNode * R = LCA(root -> right, val1, val2);
    if (L && R) 
        return root; // If val1, val2 are on both sides 
    return L ? L : R; // either one of val1, val2 is on one side OR val1, val2 is not in L&R subtrees
}

bool find(TreeNode * root, int val1) {
    if (!root) 
        return false;
    if (root -> val == val1) 
        return true;
    return (find(root -> left, val1) || find(root -> right, val1));
}

int Solution::lca(TreeNode * A, int B, int C) {
    int val1 = B;
    int val2 = C;
    TreeNode * root = A;
    if (!find(root, val1) || !find(root, val2)) 
        return -1;
    TreeNode * ans = LCA(root, val1, val2);
    if (!ans) 
        return -1;
    return ans -> val;
}
