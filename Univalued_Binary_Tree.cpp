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
    bool isUnivalTree(TreeNode* root) {
        if (!root)
            return true;
        if (root->left)
        {
            if (root->left->val!=root->val)
                return false;
        }
        if (root->right)
        {
            if (root-> right->val!= root->val)
                return false;
        }
                
        return isUnivalTree (root->left) && isUnivalTree (root->right);
    }
};