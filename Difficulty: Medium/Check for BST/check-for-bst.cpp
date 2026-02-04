/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  bool ispo(Node *root,long long mini,long long maxi){
      if(!root) return true;
      if(root->data<mini || root->data>maxi) return false;
      return ispo(root->right,root->data,maxi) &&ispo(root->left,mini,root->data);
  }
    bool isBST(Node* root) {
       return ispo(root,LLONG_MIN,LLONG_MAX);
    }
};