class Solution {
  public:
  vector<vector<int>>ans;
  vector<int>curr;
  void solve(int i,vector<int>& arr){
      if(i==arr.size()){
         ans.push_back(curr);
         return;
      }
      curr.push_back(arr[i]);
      solve(i+1,arr);
      curr.pop_back();
      solve(i+1,arr);
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        solve(0,arr);
        return ans;
        
    }
};