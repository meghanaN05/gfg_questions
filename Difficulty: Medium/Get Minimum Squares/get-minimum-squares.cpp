class Solution {
  public:
     int dfs(int n,vector<int>&memo){
         if(n==0) return 0;
         if(memo[n]!=-1) return memo[n];
         int mini=INT_MAX;
         for(int i=1;i*i<=n;i++){
             int res=1+dfs(n-i*i,memo);
             mini=min(mini,res);
         }
        return memo[n]=mini;
     }
    int minSquares(int n) {
        // Code here
          vector<int>memo(n+1,-1);
         return dfs(n,memo);
        
    }
};