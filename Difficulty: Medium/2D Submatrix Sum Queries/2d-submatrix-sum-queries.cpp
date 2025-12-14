class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        // code here
        vector<int>sum;
       int n = mat.size();
       int m = mat[0].size();
    vector<vector<int>> prefix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefix[i][j] = mat[i][j];
            if (i > 0) {
                prefix[i][j] += prefix[i - 1][j];
            }
            
            if (j > 0) {
                prefix[i][j] += prefix[i][j - 1];
            }
            if (i > 0 && j > 0) {
                prefix[i][j] -= prefix[i - 1][j - 1];
            }
        }
    }
    
     for(int i=0;i<queries.size();i++){
         int row1=queries[i][0];
          int col1=queries[i][1];
          int row2=queries[i][2];
          int col2=queries[i][3];
          int ans=prefix[row2][col2];
        if(row1>0)
        ans-=prefix[row1-1][col2];
        if(col1>0)
        ans-=prefix[row2][col1-1];
        if(row1>0 && col1>0)
        ans+=prefix[row1-1][col1-1];
         sum.push_back(ans);
     }

        return sum;
    }
};
