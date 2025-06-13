class Solution {
  public:
  bool checker(int mid,vector<int>& arr,int k){
      long long hours=0;
      for(int pile:arr){
          hours+=(pile+mid-1)/mid;
      }
      return hours<=k;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        int ans=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(checker(mid,arr,k)){
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