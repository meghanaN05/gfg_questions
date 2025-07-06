
class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        return arr[n-2]+arr[n-1];
    }
};
