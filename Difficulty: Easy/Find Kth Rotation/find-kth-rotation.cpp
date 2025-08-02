class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        // Case when the subarray is already sorted
        if (arr[low] <= arr[high]) return low;

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;  // circular
        int prev = (mid + n - 1) % n;

        // Check if mid is the minimum
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;

        // Go to the unsorted part
        else if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0; 
        
    }
};
