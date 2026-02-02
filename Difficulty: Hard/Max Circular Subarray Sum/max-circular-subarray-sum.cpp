class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int maxi=INT_MIN,curr_maxi=0;
        int mini=INT_MAX,curr_mini=0;
        int total=0;
        for(int x:arr){
            curr_maxi=max(x,curr_maxi+x);
            maxi=max(maxi,curr_maxi);
             curr_mini=min(x,curr_mini+x);
            mini=min(mini,curr_mini);
            total+=x;
        }
        if(total==mini)
        return maxi;
        return max(maxi,total-mini);
        
    }
};