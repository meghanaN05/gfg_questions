class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<bool> prev(k + 1, false);
        prev[0] = true;                     
        if (arr[0] <= k) prev[arr[0]] = true;
        for (int i = 1; i < n; i++) {
            vector<bool> curr(k + 1, false);
            curr[0] = true;
            for (int target = 1; target <= k; target++) {
                bool notTake = prev[target];
                bool take = false;
                if (arr[i] <= target)
                    take = prev[target - arr[i]];
                curr[target] = take || notTake;
            }
            prev = curr;
        }
        return prev[k];
    }
};
