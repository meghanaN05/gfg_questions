// User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int>nums, int target) {
    // code here
    int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
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
        return -1;
    
}