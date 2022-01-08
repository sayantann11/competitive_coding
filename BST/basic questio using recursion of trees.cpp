ZigZag Level Order Traversal BT
Problem Description
Given a binary tree, return the zigzag level order traversal of its nodes values. (ie, from left to right, then right to left for the next level and alternate between).


Problem Constraints
1 <= number of nodes <= 105


Input Format
First and only argument is root node of the binary tree, A.


Output Format
Return a 2D integer array denoting the zigzag level order traversal of the given binary tree.


Example Input
Input 1:
    3
   / \
  9  20
    /  \
   15   7
Input 2:
   1
  / \
 6   2
    /
   3


Example Output
Output 1:
 [
   [3],
   [20, 9],
   [15, 7]
 ]
Output 2:
 [ 
   [1]
   [2, 6]
   [3]
 ]


Example Explanation
Explanation 1:
 Return the 2D array. Each row denotes the zigzag traversal of each level.
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {
    vector<vector<int> > output;
    if (root == NULL) return output;
    stack<TreeNode*> cur_layer;
    cur_layer.push(root);
    stack<TreeNode*> next_layer;
    vector<int> layer_output;
    int d = 0; // 0: left to right; 1: right to left.

    while (!cur_layer.empty()) {
        TreeNode* node = cur_layer.top();
        cur_layer.pop();
        layer_output.push_back(node->val);
        if (d == 0) {
            if (node->left != NULL) next_layer.push(node->left);
            if (node->right != NULL) next_layer.push(node->right);
        } else {
            if (node->right != NULL) next_layer.push(node->right);
            if (node->left != NULL) next_layer.push(node->left);
        }

        if (cur_layer.empty()) {
            output.push_back(layer_output);
            layer_output.clear();
            cur_layer.swap(next_layer);
            if (d == 1) d = 0;
            else d = 1;
        }
    }
    return output;
    
}
Identical Binary Trees
Problem Description
Given two binary trees, check if they are equal or not.
Two binary trees are considered equal if they are structurally identical and the nodes have the same value.


Problem Constraints
1 <= number of nodes <= 105


Input Format
First argument is a root node of first tree, A.
Second argument is a root node of second tree, B.


Output Format
Return 0 / 1 ( 0 for false, 1 for true ) for this problem.


Example Input
Input 1:
   1       1
  / \     / \
 2   3   2   3
Input 2:
   1       1
  / \     / \
 2   3   3   3


Example Output
Output 1:
 1
Output 2:
 0


Example Explanation
Explanation 1:
 Both trees are structurally identical and the nodes have the same value.
Explanation 2:
 Value of left child of the tree is different.
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    return ((p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right)); 
}
Nodes Count
Problem Description
You are given the root node of a binary tree A. You have to find the number of nodes in this tree.


Problem Constraints
1 <= Number of nodes in the tree <= 105
0 <= Value of each node <= 107


Input Format
First and only argument is a tree node A.


Output Format
Return an integer denoting the number of nodes of the tree.


Example Input
Input 1:
 Values =  1 
          / \     
         4   3                        
Input 2:
 
 Values =  1      
          / \     
         4   3                       
        /         
       2                                     


Example Output
Output 1:
 3 
Output 2:
 4 


Example Explanation
Explanation 1:
Clearly, there are 3 nodes 1, 4 and 3.
Explanation 2:
Clearly, there are 4 nodes 1, 4, 3 and 2.
void count(TreeNode* A, int &ans){
    if(A == NULL) return;
    ans++;
    count(A->left,ans);
    count(A->right,ans);
}

int Solution::solve(TreeNode* A) {
    int ans=0;
    count(A,ans);
    return ans;
}
Nodes Sum
Problem Description
You are given the root node of a binary tree A. You have to find the sum of node values of this tree.


Problem Constraints
1 <= Number of nodes in the tree <= 105
0 <= Value of each node <= 104


Input Format
First and only argument is a tree node A.


Output Format
Return an integer denoting the sum of node values of the tree.


Example Input
Input 1:
 Values =  1 
          / \     
         4   3                        
Input 2:
 
 Values =  1      
          / \     
         8   3                       
        /         
       2                                     


Example Output
Output 1:
 8 
Output 2:
 14 


Example Explanation
Explanation 1:
Clearly, 1 + 4 + 3 = 8.
Explanation 2:
Clearly, 1 + 8 + 3 + 2 = 14.

void count(TreeNode* A, int &ans){
    if(A == NULL) return;
    ans += A->val;
    count(A->left,ans);
    count(A->right,ans);
}

int Solution::solve(TreeNode* A) {
    int ans=0;
    count(A,ans);
    return ans;
}


void count(TreeNode* A, int &ans){
    if(A == NULL) return;
    ans = max(ans,A->val);
    count(A->left,ans);
    count(A->right,ans);
}

int Solution::solve(TreeNode* A) {
    int ans=0;
    count(A,ans);
    return ans;
}
void count(TreeNode* A, int &ans){
    if(A == NULL) return;
    ans = max(ans,A->val);
    count(A->left,ans);
    count(A->right,ans);
}

int Solution::solve(TreeNode* A) {
    int ans=0;
    count(A,ans);
    return ans;
}

Tree Height
Problem Description
You are given the root node of a binary tree A, You have to find the height of the given tree.
A binary tree's height is the number of nodes along the longest path from the root node down to the farthest leaf node.


Problem Constraints
1 <= Number of nodes in the tree <= 105
0 <= Value of each node <= 109


Input Format
First and only argument is a tree node A.


Output Format
Return an integer denoting the height of the tree.


Example Input
Input 1:
 Values =  1 
          / \     
         4   3                        
Input 2:
 
 Values =  1      
          / \     
         4   3                       
        /         
       2                                     


Example Output
Output 1:
 2 
Output 2:
 3 


Example Explanation
Explanation 1:
 Distance of node having value 1 from root node = 1
 Distance of node having value 4 from root node = 2 (max)
 Distance of node having value 3 from root node = 2 (max)
Explanation 2:
 Distance of node having value 1 from root node = 1
 Distance of node having value 4 from root node = 2
 Distance of node having value 3 from root node = 2
 Distance of node having value 2 from root node = 3 (max)
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::solve(TreeNode* A) {
    if(A == NULL) return 0;
    return 1 + max(solve(A -> left),solve(A -> right));
}

