class Solution {
  public:
  bool possible(int day,vector<int>& bloomDay, int k, int m) {
        int bouquets = 0, flowers = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
  
    int minDaysBloom(vector<int>& arr, int k, int m) {
        if(arr.size()<m*k) return -1;
        int l=*min_element(arr.begin(),arr.end()),r=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(mid,arr,k,m)){
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