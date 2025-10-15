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
    vector<int> ans;
    
    void inorder(Node *root) {
        if (!root) return;
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }

    int kthSmallest(Node *root, int k) {
        inorder(root);
        if (k <= 0 || k > ans.size()) return -1;
        return ans[k - 1];
    }
};
