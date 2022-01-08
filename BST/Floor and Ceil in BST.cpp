Floor and Ceil in BST
Problem Description
Given a Binary Search Tree rooted at A.
Given an integer array B of size N. Find the floor and ceil of every element of the array B.
Floor(X) is the highest element in the tree <= X, while the ceil(X) is the lowest element in the tree >= X.
NOTE: If floor or ceil of any element of B doesn't exists, output -1 for the value which doesn't exists.


Problem Constraints
0 <= Number of nodes in the tree <= 1000000
0 <= node values <= 109
0 <= N <= 100000
0 <= B[i] <= 109


Input Format
First argument represents the root of binary tree A.
Second argument is an integer array B.


Output Format
Return an integer array C of size N*2. C[i][0] denotes the floor value of B[i] and C[i][1] represents the ceil value of B[i] in the given tree.


Example Input
Input 1:
Given Tree A:
           10
         /    \
        4      15
       / \
      1   8
B = [4, 19]
Input 2:
Given Tree A:
            8
          /   \
         5     19
        / \     \
       4   7     100
B = [1, 11]       


Example Output
Output 1:
[
    [4, 4]
    [15, -1]
]
Output 2:
[
    [-1, 4]
    [8, 19]
]


Example Explanation
Explanation 1:
Take all elements of given tree in sorted form: [1, 4, 8, 10, 15].
4 is present in the tree. So, for B[0] = 4, output is [4, 4] as both floor and ceil value is 4.

For B[1] = 19,
Highest element <= 19 is 15. So the floor value of 19 is 15. 
19 is greater than all elements in the tree. So, the ceil value of 19 doesn't exists.
So, output is [15, -1].
Explanation 2:
All elements of tree in sorted form: [4, 5, 7, 8, 19, 100].

For B[0] = 1, 
There is no element in the tree <= 1. So, the floor value doesn't exists.
Lowest element >= 1 is 4. So, the ceil value is 4.
So, output is [-1, 4]

Similarily for B[1] = 11, output is [8, 19].
#define ll long long
#define pb push_back
const ll inf=1000000000000000;
ll floor(TreeNode* root, ll val)
{
    if (!root)
        return inf;

    /* If root->val is equal to val */
    if (root->val == val)
        return root->val;

    /* If root->val is greater than the val */
    if (root->val > val)
        return floor(root->left, val);

    /* Else, the floor may lie in right subtree
      or may be equal to the root*/
    ll floorValue = floor(root->right, val);
    return (floorValue <= val) ? floorValue : root->val;
}
int Ceil(TreeNode* root, int input)
{
    // Base case
    if (root == NULL)
        return -1;

    // We found equal val
    if (root->val == input)
        return root->val;

    // If root's val is smaller, ceil must be in right subtree
    if (root->val < input)
        return Ceil(root->right, input);

    // Else, either left subtree or root has the ceil value
    int ceil = Ceil(root->left, input);
    return (ceil >= input) ? ceil : root->val;
}
vector<vector<int> > Solution::solve(TreeNode* A, vector<int> &B) {
    vector<vector<int> >ans(B.size());
    for(int i=0;i<B.size();i++)
    {
        ll f = floor(A,B[i]);
        int c =Ceil(A,B[i]);
        if(f==inf)f=-1;
        ans[i].pb(f);
        ans[i].pb(c);
    }
    return ans;

}
