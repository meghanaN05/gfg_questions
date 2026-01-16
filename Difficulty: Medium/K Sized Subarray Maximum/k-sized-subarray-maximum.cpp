class Solution {
public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int> ans;
        int maxi = 0;
        for (int i = 0; i < k; i++)
            maxi = max(maxi, arr[i]);
        ans.push_back(maxi);

        for (int i = k; i < arr.size(); i++) {
            if (arr[i - k] == maxi) {
                maxi = arr[i - k + 1];
                for (int j = i - k + 1; j <= i; j++)
                    maxi = max(maxi, arr[j]);
            } else {
                maxi = max(maxi, arr[i]);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
