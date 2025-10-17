/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
  int sum = 0;

    void reverseinoder(Node* root) {
        if (!root) return;
        reverseinoder(root->right);
        int oldVal = root->data;
        root->data = sum;
        sum += oldVal;
        reverseinoder(root->left);
    }
    void transformTree(Node *root) {
             sum = 0;
        reverseinoder(root);

        
    }
};