class Solution {
  public:
    int bfs(int start, vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> dist(n, -1);
        queue<int> q;
        q.push(start);
        dist[start] = 0;

        int farthestNode = start;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int nei : adj[node]) {
                if (dist[nei] == -1) {
                    dist[nei] = dist[node] + 1;
                    q.push(nei);
                    if (dist[nei] > dist[farthestNode])
                        farthestNode = nei;
                }
            }
        }

        return farthestNode; 
    }

    int diameter(int V, vector<vector<int>>& edges) {
       vector<vector<int>> adj(V);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        // Step 1: find farthest node from any node (say 0)
        int nodeA = bfs(0, adj);

        // Step 2: find farthest node from nodeA
        int nodeB = bfs(nodeA, adj);

        // Step 3: compute distance from nodeA to nodeB
        vector<int> dist(V, -1);
        queue<int> q;
        q.push(nodeA);
        dist[nodeA] = 0;
        int diameter = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int nei : adj[node]) {
                if (dist[nei] == -1) {
                    dist[nei] = dist[node] + 1;
                    diameter = max(diameter, dist[nei]);
                    q.push(nei);
                }
            }
        }

        return diameter;
        
    }
};
