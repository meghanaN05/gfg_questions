class Solution {
public:
    int findNextJob(int i, vector<vector<int>> &jobs, int n) {
        int low = i + 1, high = n - 1, ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (jobs[mid][0] >= jobs[i][1]) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int dfs(int i, vector<vector<int>> &jobs, int n, vector<int> &memo) {
        if (i >= n) return 0;
        if (memo[i] != -1) return memo[i];
        int skip = dfs(i + 1, jobs, n, memo);
        int nextJob = findNextJob(i, jobs, n);
        int take = jobs[i][2] + dfs(nextJob, jobs, n, memo);

        return memo[i] = max(skip, take);
    }

    int maxProfit(vector<vector<int>> &jobs) {
        int n = jobs.size();
        sort(jobs.begin(), jobs.end());
        vector<int> memo(n + 1, -1);
        return dfs(0, jobs, n, memo);
    }
};
