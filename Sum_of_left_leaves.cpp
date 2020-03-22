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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if (root==NULL)
            return 0;
        TreeNode* node= root;
        TreeNode* temp= node->left;
        if (temp && temp->right==NULL && temp->left==NULL)
        {
           return (temp->val)+sumOfLeftLeaves(node->right);
        }
        
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves (root->right);
    }
};