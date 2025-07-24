class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int maxi=0;
        for(int p:left){
            maxi=max(maxi,p);
        }
        for(int p:right){
            maxi=max(maxi,n-p);
        }
        return maxi;
    }
};