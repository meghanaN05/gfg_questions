class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n=mat.size();
         vector<int>ans;
         for(int i=0;i<n;i++){
             int j=0,col=i;
             while(j<n && col>=0){
                 ans.push_back(mat[j][col]);
                 j++;
                 col--;
             }
         }
         for(int i=1;i<n;i++){
             int j=i,col=n-1;
             while(j<n && col>=0){
                 ans.push_back(mat[j][col]);
                 j++;
                 col--;
             }
         }
        return ans;
    }
};