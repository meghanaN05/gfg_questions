class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        int maxi=INT_MIN;
        int diff;
        for(int i=0;i<mices.size();i++){
            diff=abs(mices[i]-holes[i]);
            maxi=max(maxi,diff);
            
        }
        return maxi;
    }
};