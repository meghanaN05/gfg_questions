class Solution {
  public:
  int f(int index,vector<int>& height,int end,vector<int>&memo){
      
      if(index>=end) return 0;
      int option1=1e9;
      int option2=1e9;
      if(memo[index]!=-1){
          return memo[index];
      }
      
      if(index+1<=end)
       option1=f(index+1,height,end,memo)+abs(height[index+1]-height[index]);
       
       if(index+2<=end)
       option2=f(index+2,height,end,memo)+abs(height[index+2]-height[index]);
       return memo[index]=min(option1,option2);
      
  }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int>memo(n+1,-1);
        int ans=f(0,height,n-1,memo);
        return ans;
        
        
    }
};