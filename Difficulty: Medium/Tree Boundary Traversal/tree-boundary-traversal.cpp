/*
// Tree Node
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
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
        if (!root) return res;

        auto isLeaf = [](Node* node) {
            return !node->left && !node->right;
        };

        // 1. Add root (only if not a leaf)
        if (!isLeaf(root)) res.push_back(root->data);

        // 2. Left boundary (excluding leaves)
        Node* cur = root->left;
        while (cur) {
            if (!isLeaf(cur)) res.push_back(cur->data);
            if (cur->left) cur = cur->left;
            else cur = cur->right;
        }

        // 3. Add leaf nodes (DFS)
        function<void(Node*)> addLeaves = [&](Node* node) {
            if (!node) return;
            if (isLeaf(node)) {
                res.push_back(node->data);
                return;
            }
            addLeaves(node->left);
            addLeaves(node->right);
        };
        addLeaves(root);

        // 4. Right boundary (excluding leaves, reversed)
        vector<int> right;
        cur = root->right;
        while (cur) {
            if (!isLeaf(cur)) right.push_back(cur->data);
            if (cur->right) cur = cur->right;
            else cur = cur->left;
        }
        reverse(right.begin(), right.end());
        for (int x : right) res.push_back(x);

        return res;
    }
};
