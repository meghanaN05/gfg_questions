class Solution {
  public:
  bool possible(int mid,vector<int> &arr, int k){
      int student=1;
      int ans=0;
      for(int i=0;i<arr.size();i++){
          if(ans+arr[i]<=mid){
              ans+=arr[i];
          }
          else{
              student++;
              ans=arr[i];
          }
      }
      return student<=k;
  }
    int findPages(vector<int> &arr, int k) {
       int n = arr.size();
    if(k > n) return -1;
       int l=*max_element(arr.begin(),arr.end());
       int r=accumulate(arr.begin(),arr.end(),0);
       int ans=0;
       while(l<=r){
           int mid=l+(r-l)/2;
           if(possible(mid,arr,k)){
               ans=mid;
               r=mid-1;
           }
           else{
               l=mid+1;
           }
       }
        return ans;
    }
};