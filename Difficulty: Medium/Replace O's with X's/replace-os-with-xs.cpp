class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    void dfs(int i, int j, vector<vector<char>>& grid, int m, int n) {
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != 'O') return;
        grid[i][j] = '#'; 
        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            dfs(ni, nj, grid, m, n);
        }
    }

    void fill(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return;
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            dfs(i, 0, grid, m, n);
            dfs(i, n - 1, grid, m, n);
        }
        for (int j = 0; j < n; j++) {
            dfs(0, j, grid, m, n);
            dfs(m - 1, j, grid, m, n);
        }

       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 'O') grid[i][j] = 'X';
                else if (grid[i][j] == '#') grid[i][j] = 'O';
            }
        }
    }
};
