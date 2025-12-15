class Solution {
public:
    int cntWays(vector<int>& arr) {
        int n = arr.size();
        long long evenSum = 0, oddSum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) evenSum += arr[i];
            else oddSum += arr[i];
        }
        long long leftEven = 0, leftOdd = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) evenSum -= arr[i];
            else oddSum -= arr[i];
            if (leftEven + oddSum == leftOdd + evenSum)
                ans++;
            if (i % 2 == 0) leftEven += arr[i];
            else leftOdd += arr[i];
        }
        return ans;
    }
};
