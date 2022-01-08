Preorder Traversal
Problem Description
Given a binary tree, return the preorder traversal of its nodes values.
NOTE: Using recursion is not allowed.


Problem Constraints
1 <= number of nodes <= 105


Input Format
First and only argument is root node of the binary tree, A.


Output Format
Return an integer array denoting the preorder traversal of the given binary tree.


Example Input
Input 1:
   1
    \
     2
    /
   3
Input 2:
   1
  / \
 6   2
    /
   3


Example Output
Output 1:
 [1, 2, 3]
Output 2:
 [1, 6, 2, 3]


Example Explanation
Explanation 1:
 The Preoder Traversal of the given tree is [1, 2, 3].
Explanation 2:
 The Preoder Traversal of the given tree is [1, 6, 2, 3].
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> nodeStack;

    while (nodeStack.size() != 0 || root != NULL) {
        if(root == NULL) {
            root = nodeStack.top();
            nodeStack.pop();
        } else {
            res.push_back(root->val);
            if(root->right != NULL)
                nodeStack.push(root->right);
            root = root->left;
        }
    }
    return res;
}
Postorder Traversal
Problem Description
Given a binary tree, return the Postorder traversal of its nodes values.
NOTE: Using recursion is not allowed.


Problem Constraints
1 <= number of nodes <= 105


Input Format
First and only argument is root node of the binary tree, A.


Output Format
Return an integer array denoting the Postorder traversal of the given binary tree.


Example Input
Input 1:
   1
    \
     2
    /
   3
Input 2:
   1
  / \
 6   2
    /
   3


Example Output
Output 1:
 [3, 2, 1]
Output 2:
 [6, 3, 2, 1]


Example Explanation
Explanation 1:
 The Preoder Traversal of the given tree is [3, 2, 1].
Explanation 2:
 The Preoder Traversal of the given tree is [6, 3, 2, 1].
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
    stack<TreeNode*> nodeStack;
    vector<int> result;
    //base case
    if(root==NULL)
        return result;
    nodeStack.push(root);
    while(!nodeStack.empty()) {
        TreeNode* node= nodeStack.top();  
        result.push_back(node->val);
        nodeStack.pop();
        if(node->left)
            nodeStack.push(node->left);
        if(node->right)
            nodeStack.push(node->right);
    }
    reverse(result.begin(),result.end());
    return result;

}
Inorder Traversal
Problem Description
Given a binary tree, return the inorder traversal of its nodes values.
NOTE: Using recursion is not allowed.


Problem Constraints
1 <= number of nodes <= 105


Input Format
First and only argument is root node of the binary tree, A.


Output Format
Return an integer array denoting the inorder traversal of the given binary tree.


Example Input
Input 1:
   1
    \
     2
    /
   3
Input 2:
   1
  / \
 6   2
    /
   3


Example Output
Output 1:
 [1, 3, 2]
Output 2:
 [6, 1, 3, 2]


Example Explanation
Explanation 1:
 The Inorder Traversal of the given tree is [1, 3, 2].
Explanation 2:
 The Inorder Traversal of the given tree is [6, 1, 3, 2].
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> vector;
    if(!root)
    return vector;
    stack<TreeNode *> stack;
    stack.push(root);
    while(!stack.empty())
    {
        TreeNode *pNode = stack.top();
        if(pNode->left)
        {
            stack.push(pNode->left);
            pNode->left = NULL;
        }
        else
        {
            vector.push_back(pNode->val);
            stack.pop();
            if(pNode->right)
            stack.push(pNode->right);
        }
    }
    return vector;
}
Method 2: Using one stack and one unordered_map, this will not changed the node. Better
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> vector;
    if(!root)
    return vector;
    unordered_map<TreeNode *, bool> map;//left child has been visited:true.
    stack<TreeNode *> stack;
    stack.push(root);
    while(!stack.empty())
    {
        TreeNode *pNode = stack.top();
        if(pNode->left && !map[pNode])
        {
            stack.push(pNode->left);
            map[pNode] = true;
        }
        else
        {
            vector.push_back(pNode->val);
            stack.pop();
            if(pNode->right)
            stack.push(pNode->right);
        }
    }
    return vector;
}
Method 3: Using one stack and will not changed the node. Best(at least in this three solutions)
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> vector;
    stack<TreeNode *> stack;
    TreeNode *pCurrent = root;

    while(!stack.empty() || pCurrent)
    {
        if(pCurrent)
        {
            stack.push(pCurrent);
            pCurrent = pCurrent->left;
        }
        else
        {
            TreeNode *pNode = stack.top();
            vector.push_back(pNode->val);
            stack.pop();
            pCurrent = pNode->right;
        }
    }
    return vector;
}
Vertical Order traversal
Problem Description
Given a binary tree, return a 2-D array with vertical order traversal of it. Go through the example and image for more details.
 
NOTE: If 2 Tree Nodes shares the same vertical level then the one with lesser depth will come first.


Problem Constraints
1 <= number of nodes <= 105


Input Format
First and only arument is a pointer to the root node of binary tree, A.


Output Format
Return a 2D array denoting the vertical order traversal of tree as shown.


Example Input
Input 1:
      6
    /   \
   3     7
  / \     \
 2   5     9
Input 2:
      1
    /   \
   3     7
  /       \
 2         9


Example Output
Output 1:
 [
    [2],
    [3],
    [6, 5],
    [7],
    [9]
 ]
Output 2:
 [
    [2],
    [3],
    [1],
    [7],
    [9]
 ]


Example Explanation
Explanation 1:
 First row represent the verical line 1 and so on.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int> > result;
    // Base case
    if (!A) return result;
    // Create a Hash map of horizontalDistance, ListOfTreeNodes(at that horizontalDistance)
    unordered_map <int,vector<int> > m;

    // Create queue to do level order traversal.
    // Every item of queue contains node and horizontal distance.
    queue<pair<TreeNode*, int> > q;
    q.push(make_pair(A, 0)); // root's horizontalDistance is zero
    int min_dist = 0, max_dist = 0;
    while(!q.empty()) {
        // get the queue front
        pair<TreeNode*,int> front = q.front();
        q.pop();
        int currentHorizontalDistance = front.second;
        // Maintain minimum and maximum horizontal Distance
        min_dist = min(min_dist, currentHorizontalDistance);
        max_dist = max(max_dist, currentHorizontalDistance);
        TreeNode* currentTreeNode = front.first;

        // insert current node to hash map
        m[currentHorizontalDistance].push_back(currentTreeNode -> val);

        if (currentTreeNode -> left != NULL) {
             q.push(make_pair(currentTreeNode -> left, currentHorizontalDistance - 1));
             
        }
        if (currentTreeNode -> right != NULL) {
            q.push(make_pair(currentTreeNode -> right, currentHorizontalDistance + 1));
        }
    }
     // Traverse the map and print nodes at every horigontal distance
    for (int i = min_dist; i <=  max_dist; i++) {
        result.push_back(m[i]);
    }
    return result;
}
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

