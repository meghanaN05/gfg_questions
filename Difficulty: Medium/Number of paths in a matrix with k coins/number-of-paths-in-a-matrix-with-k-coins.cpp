
class Solution {
public:
    int n, m, K;
    vector<vector<vector<int>>> dp;

    int dfs(int i, int j, int sum, vector<vector<int>>& mat) {
        if (i >= n || j >= m || sum < 0) return 0;
        if (i == n - 1 && j == m - 1)
            return (sum == mat[i][j]) ? 1 : 0;
        if (dp[i][j][sum] != -1) return dp[i][j][sum];
        int rem = sum - mat[i][j];
        int right = dfs(i, j + 1, rem, mat);
        int down  = dfs(i + 1, j, rem, mat);
        return dp[i][j][sum] = right + down;
    }

    int numberOfPath(vector<vector<int>>& mat, int k) {
        n = mat.size();
        m = mat[0].size();
        K = k;
        dp.assign(n, vector<vector<int>>(m, vector<int>(k + 1, -1)));

        return dfs(0, 0, k, mat);
    }
};
