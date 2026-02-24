class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        unordered_map<int,int> mp;
        int diff = 0;
        int maxi = 0;
        for(int i = 0; i < a1.size(); i++){
            diff += a1[i] - a2[i];
            if(diff == 0){
                maxi = i + 1;
            }
            if(mp.find(diff) != mp.end()){
                maxi = max(maxi, i - mp[diff]);
            } else {
                mp[diff] = i;
            }
        }
        return maxi;
    }
};