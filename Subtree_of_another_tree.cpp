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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (!s)
            return false;
       
        return sameTree(s,t)|| isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    
    bool sameTree( TreeNode *a, TreeNode *b)
    {
        if (a==NULL && b==NULL)
            return true;
        if (a==NULL || b==NULL)
            return false;
        if (a->val==b->val)
            return sameTree(a->left,b->left) && sameTree(a->right,b->right);
        else
            return false;
    }
};