class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        int n=arr.size();
         sort(arr.begin(), arr.end(), greater<int>());
    for(int i = 0; i < n - 2; i++) {
        if(arr[i] < arr[i + 1] + arr[i + 2]) {
            return arr[i] + arr[i + 1] + arr[i + 2];
        }
    }

    return -1;
    }
};