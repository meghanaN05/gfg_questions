class Solution {
  public:
  bool possible(int mid,vector<int> &stalls, int k){
      int ans=1;
      int l=stalls[0];
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-l>=mid){
                   ans++;
                   l=stalls[i];
                   if(ans==k) return true;
          }
          
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int l=0,r=stalls[stalls.size()-1]-stalls[0];
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(mid,stalls,k)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
        
    }
};