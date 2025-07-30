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
bool isleaf(Node* node) {
    return (node->left == NULL && node->right == NULL);
}

void addleft(Node *root, vector<int>& res) {
    Node* curr = root->left;
    while (curr) {
        if (!isleaf(curr)) res.push_back(curr->data);
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addleave(Node *root, vector<int>& res) {
    if (isleaf(root)) {
        res.push_back(root->data);
        return;
    }
    if (root->left) addleave(root->left, res);
    if (root->right) addleave(root->right, res);
}

void addright(Node *root, vector<int>& res) {
    vector<int> temp;
    Node* curr = root->right;
    while (curr) {
        if (!isleaf(curr)) temp.push_back(curr->data);
        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for (int i = temp.size() - 1; i >= 0; i--) {
        res.push_back(temp[i]);
    }
}

class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
        if (!root) return res;
        if (!isleaf(root)) res.push_back(root->data);
        addleft(root, res);
        addleave(root, res);
        addright(root, res);
        return res;
    }
};
