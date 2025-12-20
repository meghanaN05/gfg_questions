class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int l=0,r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]<k){
                l=mid+1;
                
                
            }
            else{
               r=mid-1;
               ans=mid;
            }
        }
        return ans;
    }
};