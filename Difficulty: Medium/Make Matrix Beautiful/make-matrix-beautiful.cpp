class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
         int n = mat.size();
    vector<int> rowSum(n, 0), colSum(n, 0);
    int total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
            total += mat[i][j];
        }
    }

    int maxSum = *max_element(rowSum.begin(), rowSum.end());
    maxSum = max(maxSum, *max_element(colSum.begin(), colSum.end()));

    return n * maxSum - total;
    }
};