class Solution {
  public:
    int getCount(int n) {
        if (n == 1) return 10;

        // Keypad moves
        vector<vector<int>> moves = {
            {0, 8},        // 0
            {1, 2, 4},     // 1
            {2, 1, 3, 5},  // 2
            {3, 2, 6},     // 3
            {4, 1, 5, 7},  // 4
            {5, 2, 4, 6, 8}, // 5
            {6, 3, 5, 9},  // 6
            {7, 4, 8},     // 7
            {8, 5, 7, 9, 0}, // 8
            {9, 6, 8}      // 9
        };

        // dp[d][len]: # of sequences of length 'len' ending at digit d
        vector<vector<int>> dp(10, vector<int>(n + 1, 0));

        // Base case: sequences of length 1
        for (int d = 0; d <= 9; ++d)
            dp[d][1] = 1;

        // Build DP
        for (int len = 2; len <= n; ++len) {
            for (int d = 0; d <= 9; ++d) {
                dp[d][len] = 0;
                for (int neighbor : moves[d]) {
                    dp[d][len] += dp[neighbor][len - 1];
                }
            }
        }

        // Total combinations of length n
        int total = 0;
        for (int d = 0; d <= 9; ++d)
            total += dp[d][n];

        return total;
    }
};
