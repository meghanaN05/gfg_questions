class Solution {
  public:
  vector<vector<int>>ans;
  vector<int>current;
  void backtrack(int i,vector<int> &arr, int target){
       if(target==0){
          ans.push_back(current);
          return;
      }
      if(i==arr.size() || target<0) return;
     
      backtrack(i+1,arr,target);
      current.push_back(arr[i]);
      backtrack(i,arr,target-arr[i]);
      current.pop_back();
  }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
      backtrack(0,arr,target);
      return ans;
        
    }
};