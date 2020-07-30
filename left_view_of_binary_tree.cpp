void leftView(Node *root)
{
    if (root==NULL)
    return;
    
    if (root->left)
    {
        cout<< root->data << " ";
        leftView(root->left);
    }
    
    if (!root->left)
    {
        cout<< root->data << " ";
        leftView(root->right);
    }
   // Your code here
}