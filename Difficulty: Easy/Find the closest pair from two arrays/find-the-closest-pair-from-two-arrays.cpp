class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int i = 0;
        int j = arr2.size() - 1;
        
        int minDiff = INT_MAX;
        vector<int> ans(2);
        
        while(i < arr1.size() && j >= 0) {
            int sum = arr1[i] + arr2[j];
            
            if(abs(sum - x) < minDiff) {
                minDiff = abs(sum - x);
                ans[0] = arr1[i];
                ans[1] = arr2[j];
            }
            
            if(sum > x) {
                j--;
            } else {
                i++;
            }
        }
        
        return ans;
    }
};