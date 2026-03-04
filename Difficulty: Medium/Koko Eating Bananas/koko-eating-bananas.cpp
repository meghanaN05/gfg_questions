class Solution {
  public:
  bool possible( int mid,vector<int>& arr, int k){
      int ans=0;
      for(int i=0;i<arr.size();i++){
          ans+=(arr[i] + mid - 1) / mid;
      }
      return ans<=k;
  }
    int kokoEat(vector<int>& arr, int k) {
       int l=1,r=*max_element(arr.begin(),arr.end());
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