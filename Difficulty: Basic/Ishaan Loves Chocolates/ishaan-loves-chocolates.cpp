class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int mini=arr[0];
        for(int i=0;i<arr.size();i++){
          mini=min(mini,arr[i]);
        }
        return mini;
    }
};
