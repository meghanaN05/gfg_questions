// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>>&mat) {
     int maxi = -1, row = 0;
    int R = mat.size();
    int C = mat[0].size();
    int col = C - 1;
    while (row < R && col >= 0) {
        if (mat[row][col] == 0) {
            row += 1;
        }
        else {
            maxi = row;
            col -= 1;
        }
    }
    return maxi;
        
    }
};