class Solution {
  public:
    int maxOnes(vector<int>& arr) {
       int cnt1=0;
       for(int i=0;i<arr.size();i++){
           if(arr[i]==1){
               cnt1++;
               arr[i]=-1;
           }
           else{
               arr[i]=1;
           }
       }
       int n = arr.size();
    int sum = 0;
    int ans = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
    
    return ans+cnt1;
       
    }
};