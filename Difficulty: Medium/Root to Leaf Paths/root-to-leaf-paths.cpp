/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  vector<vector<int>>ans;
  vector<int>path;
  void dfs(Node* root){
      if(!root) return ;
      path.push_back(root->data);
      if(!root->left && !root->right){
          ans.push_back(path);
      }
      dfs(root->left);
      dfs(root->right);
      path.pop_back();
  }
    vector<vector<int>> Paths(Node* root) {
       dfs(root);
       return ans;
    }
};