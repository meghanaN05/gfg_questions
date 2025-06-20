
class Solution {
  public:
    // Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high) {
        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;

      
            if (arr[low] <= arr[high]) {
                ans = min(ans, arr[low]);
                break;
            }

      
            if (arr[low] <= arr[mid]) {
                ans = min(ans, arr[low]);
                low = mid + 1;
            }

            else {
                ans = min(ans, arr[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};
