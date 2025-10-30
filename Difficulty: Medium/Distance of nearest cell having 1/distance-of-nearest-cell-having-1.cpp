class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    grid[i][j] = 0;  
                } else {
                    grid[i][j] = INT_MAX;
                }
            }
        }

        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int hi = i + dx[k];
                int hj = j + dy[k];

                if (hi >= 0 && hj >= 0 && hi < m && hj < n) {
                    if (grid[hi][hj] > grid[i][j] + 1) {
                        grid[hi][hj] = grid[i][j] + 1;
                        q.push({hi, hj});
                    }
                }
            }
        }

        return grid;
    }
};
