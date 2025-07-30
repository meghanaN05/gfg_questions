class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>prefix;
        int sum=0,count=0;
        prefix[0]=1;
         for(int num:arr){
            sum+=num;
            if(prefix.find(sum-k)!=prefix.end()){
                count+=prefix[sum-k];
            }
            prefix[sum]++;
        }
          return count;
    }
};