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
  vector<int>ans;
  void left(Node *root,int level){
      if(root==NULL) return ;
      if(ans.size()==level) ans.push_back(root->data);
      left(root->left,level+1);
      left(root->right,level+1);
  }
    vector<int> leftView(Node *root) {
        left(root,0);
        return ans;
        
    }
};