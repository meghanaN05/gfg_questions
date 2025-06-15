class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int answer = high;

        auto computeSum = [&](int divisor) {
            int total = 0;
            for (int num : arr) {
                total += (num + divisor - 1) / divisor; // Equivalent to ceil(num / divisor)
            }
            return total;
        };

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = computeSum(mid);

            if (sum <= k) {
                answer = mid;         // Try to minimize
                high = mid - 1;
            } else {
                low = mid + 1;        // Need larger divisor
            }
        }

        return answer;
    }
};
