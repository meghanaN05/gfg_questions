/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  vector<int>order;
  void inorder(Node* root){
      if(!root) return;
      inorder(root->left);
      order.push_back(root->data);
      inorder(root->right);
  }
    int kthLargest(Node *root, int k) {
       inorder(root);
       reverse(order.begin(),order.end());
       return order[k-1];
        
    }
};