class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        return inorder(root->left, root->right);    
    }
    bool inorder(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL or r2 == NULL)
            return r1==r2;
        return  inorder(r1->left, r2->right) and r1->val == r2->val and inorder(r1->right, r2->left);
        
    }
};
