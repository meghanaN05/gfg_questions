class Solution {
public:
    int solve(int i, int prevIndex, vector<vector<int>>& dp, vector<int>& arr) {
        if (i == arr.size()) return 0;

        if (dp[i][prevIndex + 1] != -1) 
            return dp[i][prevIndex + 1];

        int take = 0;
        if (prevIndex == -1 || arr[i] > arr[prevIndex]) {
            take = arr[i] + solve(i + 1, i, dp, arr);
        }

        int skip = solve(i + 1, prevIndex, dp, arr);

        return dp[i][prevIndex + 1] = max(take, skip);
    }

    int maxSumIS(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solve(0, -1, dp, arr);
    }
};
