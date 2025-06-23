class Solution {
  public:
    vector<int> largestSubset(vector<int>& arr) {
       	int n  = arr.size();
    sort(arr.rbegin(), arr.rend());

    // Table to store the size of largest subset
    vector<int> dp(n, 1);

    // To keep track of previous elements
    vector<int> parent(n, -1);

    // Fill dp table
    int maxSize = 1;
    int lastIndex = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] % arr[i] == 0 && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }

        // Update maxSize and lastIndex
        if (dp[i] > maxSize) {
            maxSize = dp[i];
            lastIndex = i;
        }
    }

    // Backtrack to construct the subset
    vector<int> res;
    for (int i = lastIndex; i >= 0; i = parent[i]) {
        res.push_back(arr[i]);
        if (parent[i] == -1)
            break;
    }

    return res;
    }
};
