/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root,TreeNode* minn=NULL,TreeNode* maxx = NULL) {
        if(!root)
            return true;
        if(minn!=NULL && root->val<=minn->val )
            return false;
        if(maxx!=NULL && root->val>=maxx->val )
            return false;
        bool lefttree = isValidBST(root->left,minn,root);
        bool righttree = isValidBST(root->right,root,maxx);
            
        return lefttree&&righttree;
        
    }
};
