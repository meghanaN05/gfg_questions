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
    int isSumProperty(Node *root) {
        // code here
        if(!root || (!root->left &&  !root->right)) return true;
        int l=root->left?root->left->data:0;
        int r=root->right?root->right->data:0;
        return (root->data==l+r) &&isSumProperty(root->left)&&isSumProperty(root->right);
        
    }
};