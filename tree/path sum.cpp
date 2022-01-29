class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        int remain = targetSum - root->val;
        // leaf
        if (!root->left && !root->right){
            if(remain == 0)
                return true;
        }
        // non-leaf
        return hasPathSum(root->left, remain) || hasPathSum(root->right, remain);
    }
};
