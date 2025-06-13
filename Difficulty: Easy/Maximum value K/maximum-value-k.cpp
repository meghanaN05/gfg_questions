class Solution {
  public:
    int findMaximumNum(vector<int>& arr) {
        int n = arr.size();
        const int MAX = 1e6 + 2;
        vector<int> freq(MAX, 0);

      
        for (int val : arr) {
            freq[val]++;
        }

        int count = 0;
        for (int k = MAX - 1; k >= 0; --k) {
            count += freq[k]; 
            if (count >= k) {
                return k;
            }
        }

        return 0; 
    }
};
