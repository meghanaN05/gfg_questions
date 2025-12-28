class Solution {
  public:
  bool can(vector<int>& ranks, int mid,int n){
       int donuts = 0;
        for (int r : ranks) {
            int t = 0;
            int k = 1;
            while (t + r * k <= mid) {
                t += r * k;
                donuts++;
                k++;
                if (donuts >= n) return true;
            }
        }
        return donuts >= n;
  }
  
  
    int minTime(vector<int>& ranks, int n) {
        int l=0;
        int r=1e8;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(can(ranks,mid,n)){
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