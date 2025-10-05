class Solution {
  public:
    vector<string> res;
    int n;
    string dir = "DLRU";
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    
    bool isSafe(int x, int y, vector<vector<int>>& m, vector<vector<int>>& vis) {
        return (x >= 0 && y >= 0 && x < n && y < n && m[x][y] == 1 && !vis[x][y]);
    }

    void backtrack(int x, int y, vector<vector<int>>& m, vector<vector<int>>& vis, string path) {
        if (x == n - 1 && y == n - 1) {
            res.push_back(path);
            return;
        }
        vis[x][y] = 1;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isSafe(nx, ny, m, vis)) {
                backtrack(nx, ny, m, vis, path + dir[i]);
            }
        }
        vis[x][y] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>>& m) {
        n = m.size();
        res.clear();
        if (m[0][0] == 0 || m[n-1][n-1] == 0) return {};
        
        vector<vector<int>> vis(n, vector<int>(n, 0));
        backtrack(0, 0, m, vis, "");
        
        sort(res.begin(), res.end()); 
        return res;
    }
};
