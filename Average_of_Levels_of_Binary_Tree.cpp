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
    vector<double> averageOfLevels(TreeNode* root) {
       vector <double> res;
       queue<TreeNode*> bfs;
        bfs.push(root);
      while (!bfs.empty())
      {
          long temp=0;
         int s= bfs.size();
          for (int i=0;i<s;i++)
          {
              TreeNode *node= bfs.front();
              bfs.pop();
              if (node->left)
                  bfs.push(node->left);
              if (node->right)
                  bfs.push(node->right);
              temp+= node->val;
          }
          res.push_back((double)temp/s);
      }
        return res;
    }
};