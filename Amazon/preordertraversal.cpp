void PREORDER(Node* root, vector<int>&v)
{
    if(root!=NULL)
    {
        v.push_back(root->data);
        PREORDER(root->left,v);
        PREORDER(root->right,v);
    }
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  PREORDER(root,ans);
  return ans;
}
