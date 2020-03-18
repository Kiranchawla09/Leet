/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_set <int> st;
    bool findTarget(TreeNode* root, int k) {
        if (root==NULL)
            return false;

        if (st.find(k-root->val)!=st.end())
            return true;
        
        st.insert(root->val);
        return (findTarget(root->left,k)||findTarget(root->right,k));  
    }
};