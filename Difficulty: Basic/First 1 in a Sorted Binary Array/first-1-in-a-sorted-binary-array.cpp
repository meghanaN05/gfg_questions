class Solution {
public:
    int firstIndex(vector<int> &arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        int result = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (arr[mid] == 1) {
               
                result = mid;
                r = mid - 1;  
            } else {
                l = mid + 1;  
            }
        }

        return result;
    }
};
