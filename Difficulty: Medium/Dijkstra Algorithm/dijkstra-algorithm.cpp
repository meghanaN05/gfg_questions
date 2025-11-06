// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<pair<int, int>> adj[V];
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});  
        }
        set<pair<int, int>> st; 
        vector<int> dist(V, 1e9);
        dist[src] = 0;
        st.insert({0, src});

        while (!st.empty()) {
            auto it = *st.begin();
            int node = it.second;
            int dis = it.first;
            st.erase(it);

            for (auto nbr : adj[node]) {
                int adjNode = nbr.first;
                int wt = nbr.second;

                if (dis + wt < dist[adjNode]) {
                    if (dist[adjNode] != 1e9) {
                        st.erase({dist[adjNode], adjNode});
                    }
                    dist[adjNode] = dis + wt;
                    st.insert({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};
