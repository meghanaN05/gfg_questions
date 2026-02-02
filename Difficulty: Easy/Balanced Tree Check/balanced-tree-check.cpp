/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int h(Node* r) {
        if (!r) return 0;
        int l = h(r->left);
        if (l == -1) return -1;
        int rr = h(r->right);
        if (rr == -1) return -1;
        if (abs(l - rr) > 1) return -1;
        return 1 + max(l, rr);
    }

    bool isBalanced(Node* root) {
        return h(root) != -1;
    }
};
