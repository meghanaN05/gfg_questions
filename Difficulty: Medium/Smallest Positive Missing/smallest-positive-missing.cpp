class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        set<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=1){
                ans.insert(arr[i]);
            }
        }
        int count = 1;
        for (int val : ans) {
            if (val == count) {
                count++;
            } else {
                return count;
            }
        }

        return count;
    }
};