class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int res=1;
        int platforms=1;
        int i=1,j=0;
        int n=arr.size();
         while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                platforms++;
                i++;
            } else {
                platforms--;
                j++;
            }
            res= max(res, platforms);
        }

        return res;
        
        
    }
};
