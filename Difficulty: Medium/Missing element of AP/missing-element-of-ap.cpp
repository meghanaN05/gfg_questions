
class Solution {
  public:

int findMissingUtil(vector<int>& arr, int low, int high, int diff) {
    if (high <= low)
        return INT_MAX;

    int mid = low + (high - low) / 2;

   
    if (mid + 1 < arr.size() && arr[mid + 1] - arr[mid] != diff)
        return arr[mid] + diff;

    if (mid - 1 >= 0 && arr[mid] - arr[mid - 1] != diff)
        return arr[mid - 1] + diff;

    
    if (arr[mid] == arr[0] + mid * diff)
        return findMissingUtil(arr, mid + 1, high, diff);

    return findMissingUtil(arr, low, mid - 1, diff);
}

int findMissing(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) return -1;

    int d1 = arr[1] - arr[0];
    int d2 = arr[n - 1] - arr[n - 2];
    int d3 = (arr[n - 1] - arr[0]) / n;

   
    int diff = (d1 == d2) ? d1 : d3;

    
    int res = findMissingUtil(arr, 0, n - 1, diff);

   
    return (res == INT_MAX) ? (arr[n - 1] + diff) : res;
}
};