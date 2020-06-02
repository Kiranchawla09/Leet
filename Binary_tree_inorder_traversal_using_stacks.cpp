class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> result;
        stack <TreeNode*> stk;
        while (!stk.empty()||root)
        {
            while (root)
            {
                stk.push(root);
                root=root->left;
            }
            root= stk.top();
            stk.pop();
            result.push_back(root->val);
            root=root->right;
        }
        return result;
    }
};