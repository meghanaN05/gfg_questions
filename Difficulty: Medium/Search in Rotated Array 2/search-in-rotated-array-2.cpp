class Solution {
  public:
    bool Search(vector<int>&nums, int target) {
        // Code here
          int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return true;
            if(nums[l]==nums[mid] && nums[mid]==nums[r]){
                l++;
                r--;
                continue;
            }
            if(nums[l]<=nums[mid]){
             if(nums[l]<=target && target<=nums[mid]){
                r=mid-1;
             }
             else{
                l=mid+1;
             }
            }
            else{
             if(nums[mid]<=target && target<=nums[r]){
                l=mid+1;
             }
             else{
                r=mid-1;
             }
            }
        }
        return false;
        
    }
};