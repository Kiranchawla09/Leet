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
    void levelOrder(vector<vector<int>>&vect2, TreeNode * node, int level)
    {
        if (!node)
            return;
        if (level >= vect2.size())
            vect2.push_back({});
        vect2[level].push_back(node->val);
        levelOrder(vect2,node->left,level+1);
        levelOrder(vect2,node->right,level+1);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>vect2;
        levelOrder(vect2,root,0);
        reverse(vect2.begin(),vect2.end());
        return vect2;
    }
};