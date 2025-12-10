class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int as=(arr.size()+1)*arr.size()/2;
        int sum=accumulate(arr.begin(),arr.end(),0);
       sort(arr.begin(),arr.end());
       int n=0;
       for(int i=0;i<arr.size()-1;i++){
           if(arr[i]==arr[i+1]){
               n=arr[i];
               break;
           }
       }
       sum-=n;
       vector<int>ans(2);
       ans[0]=n;
       ans[1]=as-sum;
       return ans;
        
    }
};