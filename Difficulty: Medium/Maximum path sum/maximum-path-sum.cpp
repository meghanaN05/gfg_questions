/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int maxisum(Node* root,int &maxi){
      if(root==NULL) return 0;
      int left=max(0,maxisum(root->left,maxi));
      int right=max(0,maxisum(root->right,maxi));
      maxi=max(maxi,left+right+root->data);
      return max(left,right)+root->data;
  }
    int findMaxSum(Node *root) {
       int maxi=INT_MIN;
       maxisum(root,maxi);
       return maxi;
    }
};