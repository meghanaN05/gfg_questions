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
  int maxsum(Node *root,int &maxi){
      if(root==NULL) return 0;
      int lh=max(0,maxsum(root->left,maxi));
      int rh=max(0,maxsum(root->right,maxi));
      maxi=max(maxi,lh+rh+root->data);
      return max(rh,lh)+root->data;
  } 
    int findMaxSum(Node *root) {
        int maxi=INT_MIN;
        maxsum(root,maxi);
        return maxi;
        
    }
};