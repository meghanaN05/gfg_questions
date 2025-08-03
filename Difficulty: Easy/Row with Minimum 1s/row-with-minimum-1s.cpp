class Solution {
  public:
 
    int minRow(vector<vector<int>> &matrix) {
         int n = matrix.size();
    int m = matrix[0].size();

    int min_ones = m + 1;
    int index = -1;

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 1)
                count++;
        }

        if (count < min_ones || (count == min_ones && i < index)) {
            min_ones = count;
            index = i;
        }
    }

    return index + 1; 

        
    }
};