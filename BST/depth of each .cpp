Depth of Each Node
Problem Description

You are given the root node of a binary tree A. Each node has a value val and depth depth.

Initially depth of each node is set to -1. You have to fill the depth of each node with its correct value.
Depth of a node T is the number of nodes along the longest path from the root node down to node T. Also, depth of root node is always equal to 1.



Problem Constraints
1 <= Number of nodes <= 105

0 <= Value of each node <= 109

Initially, Depth of each node(depth) is set to -1.



Input Format
First and only argument is a tree node A.



Output Format
There is no output required.



Example Input
Input 1:

 
 Values =  1        Depths = -1
          / \                / \
         4   3             -1  -1                    
Input 2:

 
 Values =  1        Depths = -1
          / \                / \
         4   3             -1  -1                   
        /                  /
       2                 -1                           


Example Output
Output 1:

 
 Values =  1        Depths =  1
          / \                / \
         4   3              2   2                    
Output 2:

 
 Values =  1        Depths =  1
          / \                / \
         4   3              2   2                   
        /                  /
       2                  3                           


Example Explanation
Explanation 1:

 Depth of node having value 1 = 1 (root node)
 Depth of node having value 4 = 2
 Depth of node having value 3 = 2
Explanation 2:

 Depth of node having value 1 = 1 (root node)
 Depth of node having value 4 = 2
 Depth of node having value 3 = 2
 Depth of node having value 2 = 3
 
 solution:
 /*
Definition for TreeNode.
struct TreeNode {
    int val;
    int depth;
    TreeNode *left;
    TreeNode* right;
    TreeNode(int x) : val(x), depth(-1), left(NULL), right(NULL) {}
};
*/

void dfs(TreeNode* A, int d){
    A -> depth = d;
    if(A -> left != NULL){
        dfs(A -> left, d + 1);    
    }
    if(A -> right != NULL){
        dfs(A -> right, d + 1);
    }
}

void solve(TreeNode* A){
    dfs(A, 1);
}
