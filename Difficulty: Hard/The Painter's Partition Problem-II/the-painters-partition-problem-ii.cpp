class Solution {
  public:
    bool possible(int mid,vector<int>& arr, int k){
      int ans=0;
      int cnt=1;
      for(int i=0;i<arr.size();i++){
          if(ans+arr[i]<=mid){
              ans+=arr[i];
          }
          else{
              cnt++;
              ans=arr[i];
          }
      }
      return cnt<=k;
  }
    int minTime(vector<int>& arr, int k) {
           int l=*max_element(arr.begin(),arr.end()),r=accumulate(arr.begin(),arr.end(),0);
       int ans=-1;
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