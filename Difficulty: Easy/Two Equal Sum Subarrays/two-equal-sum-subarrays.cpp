class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum=accumulate(arr.begin(),arr.end(),0);
        int e=0;
        for(int i=0;i<arr.size();i++){
            e+=arr[i];
            if(e==sum-e) return  true;
        }
        return false;
    }
};
