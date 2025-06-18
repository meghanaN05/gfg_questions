class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());  
        int n = arr.size();
        int i = 0, j = 1;

        while (i < n && j < n) {
            if (i == j) {
                j++; 
                continue;
            }
            int diff = arr[j] - arr[i];
            if (diff == x) return true;
            else if (diff < x) j++;
            else i++;
        }

        return false;
    }
};
