/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  Node* findMin(Node *root){
      while(root && root->left){
          root=root->left;
      }
      return root;
  }
    Node* delNode(Node* root, int x) {
       if(root==NULL) return NULL;
       if(x<root->data){
           root->left=delNode( root->left,  x);
       }
       else if(x>root->data){
           root->right=delNode(root->right,x);
       }
       else{
           if(!root->left && !root->right){
               delete root;
               return NULL;
           }
           if(!root->left){
               Node * temp=root->right;
               delete root;
               return temp;
           }
          if(!root->right){
              Node * temp=root->left;
               delete root;
               return temp;
          }
           if(root->left && root->right){
              Node *succ=findMin(root->right);
              root->data=succ->data;
              root->right=delNode(root->right,succ->data);
           }
             
       }
       return root;
    }
};