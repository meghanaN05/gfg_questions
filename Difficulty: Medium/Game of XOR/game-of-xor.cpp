class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        if(arr.size()%2==0) return 0;
        int ans;
        for(int i=0;i<arr.size();i+=2){
            ans^=arr[i];
        }
        return ans;
    }
};