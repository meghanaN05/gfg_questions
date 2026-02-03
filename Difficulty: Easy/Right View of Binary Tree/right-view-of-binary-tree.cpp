/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  void right(Node *root,int level,vector<int>&ans){
      if(root==NULL) return ;
      if(ans.size()==level) ans.push_back(root->data);
      right(root->right,level+1,ans);
      right(root->left,level+1,ans);
  }
    vector<int> rightView(Node *root) {
       vector<int>ans;
       right(root,0,ans);
       return ans;
        
    }
};