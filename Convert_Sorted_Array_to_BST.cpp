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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return (Array(nums, 0, nums.size()));
        
    }
    TreeNode *Array (vector<int> &nums, int start, int end)
    {
        if (end<=start)
            return NULL;
        int middle= (start+end)/2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left= Array(nums,start, middle);
        root->right= Array (nums,middle+1,end);
        return root;
    }
};