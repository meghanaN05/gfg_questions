
class Solution {
public:
    int lcsMemo(int i, int j, string &s1, string &s2, vector<vector<int>> &dp) {
        if (i == 0 || j == 0) return 0; 

        if (dp[i][j] != -1) return dp[i][j]; 

        if (s1[i-1] == s2[j-1])
            return dp[i][j] = 1 + lcsMemo(i-1, j-1, s1, s2, dp);
        else
            return dp[i][j] = max(lcsMemo(i-1, j, s1, s2, dp), lcsMemo(i, j-1, s1, s2, dp));
    }

    int minSuperSeq(string X, string Y) {
        int n = X.size(), m = Y.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        int lcs = lcsMemo(n, m, X, Y, dp);
        return n + m - lcs;
    }
};
