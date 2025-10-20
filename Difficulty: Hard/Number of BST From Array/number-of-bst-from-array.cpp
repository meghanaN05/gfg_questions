class Solution {
  public:
  long long count(int n) {
    if (n <= 1) return 1;
    long long dp[n+1];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    return dp[n];
}
    vector<int> countBSTs(vector<int>& arr) {
        vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    int n = arr.size();
    vector<int> ans;

    for (int x : arr) {
        int left = lower_bound(sorted.begin(), sorted.end(), x) - sorted.begin();
        int right = n - left - 1;
        ans.push_back(count(left) * count(right));
    }
      return ans;

        
    }
};