class Solution {
  public:
    vector<vector<int>> getComponents(int v, vector<vector<int>>& edges) {
        vector<vector<int>> adj(v);

        for (auto &e : edges) {
            int u = e[0], w = e[1];
            adj[u].push_back(w);
            adj[w].push_back(u);
        }

        vector<vector<int>> ans;
        vector<int> visited(v, 0);

        for (int i = 0; i < v; i++) {
            if (!visited[i]) {
                vector<int> comp;
                queue<int> q;
                q.push(i);
                visited[i] = 1;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    comp.push_back(node);

                    for (int neigh : adj[node]) {
                        if (!visited[neigh]) {
                            visited[neigh] = 1;
                            q.push(neigh);
                        }
                    }
                }
                ans.push_back(comp);
            }
        }
        return ans;
    }
};
