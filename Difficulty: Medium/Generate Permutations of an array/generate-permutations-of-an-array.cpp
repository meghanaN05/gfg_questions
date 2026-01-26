class Solution {
  public:
  vector<vector<int>>ans;
  vector<int>a;
   void backtrack(vector<int>&nums,vector<bool>&used){
       if(a.size()==nums.size()){
           ans.push_back(a);
           return;
       }
         for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;       
            used[i] = true;
            a.push_back(nums[i]);
            backtrack(nums, used);
            a.pop_back();
            used[i] = false;
        }
   }
    vector<vector<int>> permuteDist(vector<int>& nums) {
      vector<bool>used(nums.size(),false);
      backtrack(nums,used);
      return ans;
        
    }
};