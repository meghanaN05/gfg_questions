class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        map<int, vector<int>> m;
        queue<pair<Node*, int>> q; 
        q.push({root, 0});
        while (!q.empty()) {
            auto t = q.front();
            q.pop();
            Node* n = t.first;
            int c = t.second;
            m[c].push_back(n->data);
            if (n->left)
                q.push({n->left, c - 1});
            if (n->right)
                q.push({n->right, c + 1});
        }
        vector<vector<int>> ans;
        for (auto &it : m)
            ans.push_back(it.second);

        return ans;
    }
};
