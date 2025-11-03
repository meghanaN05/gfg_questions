class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);   
        vector<int> indegree(V, 0);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i); 
        }
        vector<bool> safe(V, false);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            safe[node] = true;
            for (int prev : adj[node]) {
                indegree[prev]--;
                if (indegree[prev] == 0) q.push(prev);
            }
        }
        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (safe[i]) ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
