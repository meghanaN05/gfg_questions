class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
     int n=mat.size();
     int m=mat[0].size();
     int l=0,r=m-1;
     while(l<=r){
         int mid=l+(r-l)/2;
         int maxi=0;
         for(int i=0;i<n;i++){
             if(mat[i][mid]>mat[maxi][mid])
                 maxi=i;
             }
            int l1  = (mid - 1 >= 0) ? mat[maxi][mid - 1] : -1e9;
            int r1 = (mid + 1 < m) ? mat[maxi][mid + 1] : -1e9;
              if (mat[maxi][mid] >= l1 && mat[maxi][mid] >= r1) {
                return {maxi, mid};
            }
            else if (l1 > mat[maxi][mid]) {
                r = mid - 1;
            }
            else {
                l=mid+1;
            
         }
     }
    
       return {-1,-1};

    }
};
