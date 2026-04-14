class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int cnt=0;
        int ans=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                cnt++;
                ans+=cnt;
            }
            else{
                cnt=0;
            }
        }
        return ans;
    }
};
