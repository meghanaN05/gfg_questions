class Solution {
  public:
    int shortCycle(int V, vector<vector<int>>& edges) {
          vector<vector<int>> adj(V);
    for (auto &e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    int ans = INT_MAX;

    for (int start = 0; start < V; start++) {
        vector<int> dist(V, -1);
        vector<int> parent(V, -1);
        queue<int> q;

        dist[start] = 0;
        q.push(start);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    parent[v] = u;
                    q.push(v);
                } else if (parent[u] != v) {
                    ans = min(ans, dist[u] + dist[v] + 1);
                }
            }
        }
    }

    if (ans == INT_MAX) return -1;
    return ans;
        
    }
};
