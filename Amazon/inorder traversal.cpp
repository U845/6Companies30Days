class Solution {
    public:
        void dfs(Node* node, vector<int>&ans)
        {
            if(node==NULL)
            {
                return;
            }
            dfs(node->left,ans);
            ans.push_back(node->data);
            dfs(node->right,ans);
        }
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        dfs(root,ans);
        return ans;
    }
};
