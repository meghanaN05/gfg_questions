class Solution {
  public:
 bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
    vector<bool> dp(k + 1, false);
    dp[0] = true;

    for (int x : arr) {
        for (int j = k; j >= x; j--) {
            dp[j] = dp[j] || dp[j - x];
        }
    }
    return dp[k];
}

    
};