class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
       
        int l=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
             while(sum>target && l<=i){
                sum-=arr[l];
                l++;
            }
            
            if(sum==target){
               return {l+1,i+1};
                
            }
           
        }
        return {-1};
    }
};