class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    void backtrack(int idx, vector<int>& arr, int target) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue;
            if (arr[i] > target) break; 
            current.push_back(arr[i]);
            backtrack(i + 1, arr, target - arr[i]);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        backtrack(0, arr, target);
        return ans;
    }
};
