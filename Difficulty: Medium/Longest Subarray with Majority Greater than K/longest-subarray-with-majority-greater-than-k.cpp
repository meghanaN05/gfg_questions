class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
          int n = arr.size();
    unordered_map<int, int> firstIndex;
    int prefixSum = 0, maxLen = 0;

    firstIndex[0] = -1;

    for (int i = 0; i < n; ++i) {
        int val = (arr[i] > k) ? 1 : -1;
        prefixSum += val;

        if (prefixSum > 0) {
            maxLen = i + 1;
        } else if (firstIndex.find(prefixSum - 1) != firstIndex.end()) {
            maxLen = max(maxLen, i - firstIndex[prefixSum - 1]);
        }

        if (firstIndex.find(prefixSum) == firstIndex.end()) {
            firstIndex[prefixSum] = i;
        }
    }

    return maxLen;
        
    }
};