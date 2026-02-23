class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
       int l=0;
       int r=arr.size()-1;
       int ans=-1;
       while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==k){
            ans=mid;
            r=mid-1;
            }
            else if(arr[mid]>k){
               r=mid-1;
            }
             else{
              l=mid+1;  
             }
       }
        return ans;
        
    }
};