class Solution {
public:

    int atMost(vector<int>& arr, int k) {
        int l = 0, sum = 0, cnt = 0;
        for(int r = 0; r < arr.size(); r++) {
            sum += arr[r];
            while(sum > k) {
                sum -= arr[l];
                l++;
            }
            cnt += (r - l + 1);
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& arr, int target) {
        return atMost(arr, target) - atMost(arr, target - 1);
    }
};