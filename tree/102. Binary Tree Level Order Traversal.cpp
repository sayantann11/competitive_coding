class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(!root) return {};
        
        std::vector<std::vector<int>> result;
        
        std::queue<TreeNode*> queue; // for original
        std::queue<TreeNode*> temp; // for copying the nodes at a certain level
        std::vector<int> vec;
        
        queue.push(root);
        
        while(!queue.empty())
        {
            vec.clear();
            temp = queue;
            while(!temp.empty())
            {
                if(temp.front())
                    vec.push_back((temp.front())->val); 
                temp.pop(); // if node is null, we still need to pop
                
                // keep popping and pushing its children onto the queue for the next iterations
                root = queue.front(); queue.pop();                
                if(root)
                {
                    queue.push(root->left);
                    queue.push(root->right);
                }
            }
            if(vec.size())
                result.push_back(vec);
        }
        return result;
    }
};
