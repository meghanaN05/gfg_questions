class Solution {
  public:
    int maxEdgesToAdd(int V, vector<vector<int>>& edges) {
         int E = edges.size();   // Number of existing edges
        int maxi = V * (V - 1) / 2;  
        return maxi - E; 

    }
};
