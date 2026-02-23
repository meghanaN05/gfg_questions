class Solution {
  public:
    bool twoSum(vector<int>&nums, int target) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(st.find(target-nums[i])!=st.end()){
                 return true;
            }
            st.insert(nums[i]);
           
        }
        return false;
    }
};