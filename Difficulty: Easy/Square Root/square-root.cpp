class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int l=0;
        int h=n;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid*mid<=n){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};