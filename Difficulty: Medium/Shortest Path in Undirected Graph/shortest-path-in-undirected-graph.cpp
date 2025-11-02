class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        int n=adj.size();
        vector<int>dist(n,-1);
        queue<int>q;
        dist[src]=0;
        q.push(src);
        while(!q.empty()){
            int u=q.front();q.pop();
            for(int v:adj[u]){
                if(dist[v]==-1){
                    dist[v]=dist[u]+1;
                    q.push(v);
                }
            }
        }
       return dist; 
    }
};