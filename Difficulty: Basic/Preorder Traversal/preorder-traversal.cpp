class Solution {
public:
  
    void dfs(Node* root, vector<int> &res) {
        if (root == nullptr) return;
        res.push_back(root->data);
        dfs(root->left, res);
        dfs(root->right, res);
    }

    vector<int> preOrder(Node* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};