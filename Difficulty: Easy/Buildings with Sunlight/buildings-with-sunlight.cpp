class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int maxi=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
                cnt++;
            }
        }
        return cnt;
    }
};