TOP VIEW
Problem Description

Given a binary tree of integers denoted by root A. Return an array of integers representing the top view of the Binary tree.

Top view of a Binary Tree is a set of nodes visible when the tree is visited from top.

Return the nodes in any order.



Problem Constraints
1 <= Number of nodes in binary tree <= 100000

0 <= node values <= 10^9



Input Format
First and only argument is head of the binary tree A.



Output Format
Return an array, representing the top view of the binary tree.



Example Input
Input 1:

 
            1
          /   \
         2    3
        / \  / \
       4   5 6  7
      /
     8 
Input 2:

 
            1
           /  \
          2    3
           \
            4
             \
              5


Example Output
Output 1:

 [1, 2, 4, 8, 3, 7]
Output 2:

 [1, 2, 3]


Example Explanation
Explanation 1:

Top view is described.
Explanation 2:

Top view is described.



×/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector < int > topview(TreeNode * root) {
    vector < int > ans;
    if (root == NULL)
        return ans;

    queue < pair < TreeNode * , int >> level;
    map < int, int > top;

    level.push({
        root,
        0
    });

    //Using Level order traversal to find the top view
    while (!level.empty()) {
        pair < TreeNode * , int > curr = level.front();
        level.pop();
        if (top.find(curr.second) == top.end())
            top[curr.second] = curr.first -> val;
        if (curr.first -> left != NULL) {
            level.push({
                curr.first -> left,
                curr.second - 1
            });
        }
        if (curr.first -> right != NULL) {
            level.push({
                curr.first -> right,
                curr.second + 1
            });
        }
    }

    for (auto i = top.begin(); i != top.end(); i++) {
        ans.push_back(i -> second);
    }
    return ans;
}

vector < int > Solution::solve(TreeNode * A) {
    return topview(A);
}
