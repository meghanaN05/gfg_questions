class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
      int n = arr.size();
    sort(arr.begin(), arr.end());

    // prefixSum[i] = sum of first i elements
    vector<long long> prefixSum(n + 1, 0);
    for(int i = 0; i < n; ++i)
        prefixSum[i + 1] = prefixSum[i] + arr[i];

    long long totalCoins = prefixSum[n];
    long long minRemoved = LLONG_MAX;

    for (int i = 0; i < n; ++i) {
        int base = arr[i];
        int upperLimit = base + k;

        // Binary search: find index of first element > upperLimit
        int idx = upper_bound(arr.begin(), arr.end(), upperLimit) - arr.begin();

        // Coins to remove from left of base (fully remove piles < base)
        long long coinsLeft = prefixSum[i];

        // Coins to remove from right of upperLimit (reduce all to upperLimit)
        long long coinsRight = prefixSum[n] - prefixSum[idx];
        long long allowedRight = 1LL * (n - idx) * upperLimit;
        long long reduceRight = coinsRight - allowedRight;

        long long totalRemoved = coinsLeft + reduceRight;
        minRemoved = min(minRemoved, totalRemoved);
    }

    return (int)minRemoved;
        
    }
};
