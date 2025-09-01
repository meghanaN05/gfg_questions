class Solution {
  public:
    void dfsUtil(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& result) {
        visited[node] = 1;
        result.push_back(node);
        
        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                dfsUtil(neigh, adj, visited, result);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> visited(n, 0);
        vector<int> result;
        
        dfsUtil(0, adj, visited, result);
        
        return result;
    }
};
