class Solution {
  public:
  bool possible(int mid, int arr[], int d, int n){
      int days = 1;
      int load = 0;
      for(int i = 0; i < n; i++){
          if(load + arr[i] > mid){
              days++;
              load = arr[i];
          }
          else{
              load += arr[i];
          }
      }
      return days <= d;
  }

  int leastWeightCapacity(int arr[], int n, int d) {

        int l = *max_element(arr, arr + n);
        int r = accumulate(arr, arr + n, 0);
        int ans = -1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(possible(mid, arr, d, n)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
  }
};