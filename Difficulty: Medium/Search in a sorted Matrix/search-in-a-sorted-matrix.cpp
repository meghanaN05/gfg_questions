class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        int l=0,r=n*m-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int row=mid/m;
            int col=mid%m;
            int t=mat[row][col];
            if(t==x) return true;
            else if(t<x) l=mid+1;
            else r=mid-1;
            
        }
        return false;
        
    }
};