class Solution {
public:
    bool possible(int mid, vector<int>& citations) {
        int k = 0;
        for (int c : citations) {
            if (c >= mid) k++;
        }
        return k >= mid;
    }

    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int l = 0, r = n, ans = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (possible(mid, citations)) {
                ans = mid;
                l = mid + 1; 
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
