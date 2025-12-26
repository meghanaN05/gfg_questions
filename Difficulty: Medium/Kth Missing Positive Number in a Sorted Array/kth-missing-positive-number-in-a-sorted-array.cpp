class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
      int l=0,r=arr.size()-1;
      while(l<=r){
          int mid=l+(r-l)/2;
          int ans=arr[mid]-(mid+1);
          if(ans<k){
              l=mid+1;
          }
          else{
              r=mid-1;
          }
      }
      
        return k+r+1;
    }
};