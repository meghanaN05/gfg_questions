class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n=arr.size();
        vector<int>prefix(n,0);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
         vector<int>suf(n,0);
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+arr[i];
        }
        for(int i=0;i<n;i++){
            if(suf[i]==prefix[i])
            return i;
        }
        return -1;
    }
};