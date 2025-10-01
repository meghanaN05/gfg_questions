class Solution {
  public:
      vector<vector<int>> res;
    vector<int> path;
    vector<bool> used;
    int n;

    void backtrack(vector<int> &arr, int n) {
        if (path.size() == n) {
            res.push_back(path);
            return;
        }

        int prev = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (used[i]) continue;
            if (prev != INT_MIN && prev == arr[i]) continue; 

            used[i] = true;
            path.push_back(arr[i]);

            backtrack(arr, n);

            path.pop_back();
            used[i] = false;
            prev = arr[i];
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        n=arr.size();
          sort(arr.begin(), arr.end()); // sort for lexicographic order
        used.assign(n, false);
        backtrack(arr, n);
        return res;;
        
    }
};