class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int maxi=0;
        int zero=0;
        int l=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) zero++;
            while(zero>k){
                if(arr[l]==0) zero--;
                l++;
            }
            maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};
