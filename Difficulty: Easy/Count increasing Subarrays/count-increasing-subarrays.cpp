class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int ans=0;
        int length=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
              length++;
              ans+=length-1;
            }
            else{
                length=1;
            }
            
        }
        return ans;
    }
};
