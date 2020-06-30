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
    int res=0;
    int dfs(TreeNode*root)   
    {
        if (root==NULL)
            return 0;
        int left=0, right=0;
        if (root->left)
            left= dfs(root->left);
            
        if (root->right)
            right= dfs(root->right);
        
        if (root->left==NULL || root->val!=root->left->val)
            left=0;
        
        if (root->right==NULL || root->val!= root->right->val)
            right=0;
        
        res= max(res,left+right+1);
		return max(left,right)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
       dfs(root);
        if (res>=1)
            return res-1;
        else
            return res;      
    }
};