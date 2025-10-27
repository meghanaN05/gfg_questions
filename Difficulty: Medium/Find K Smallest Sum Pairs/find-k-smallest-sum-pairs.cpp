class Solution {
  public:
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
        vector<vector<int>> ans;
        int n = arr1.size(), m = arr2.size();
        if (n == 0 || m == 0) return ans;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        for (int i = 0; i < min(n, k); i++) {
            pq.push({arr1[i] + arr2[0], i, 0});
        }

        while (k-- && !pq.empty()) {
            auto top = pq.top(); pq.pop();
            int sum = top[0], i = top[1], j = top[2];
            ans.push_back({arr1[i], arr2[j]});
            if (j + 1 < m) pq.push({arr1[i] + arr2[j + 1], i, j + 1});
        }

        return ans;
    }
};
