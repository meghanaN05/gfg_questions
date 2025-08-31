class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxi=0;
        int i=0,j=arr.size()-1;
        while(i<=j){
            int d=j-i;
            int e=min(arr[i],arr[j]);
            maxi=max(maxi,d*e);
            if(arr[i]<arr[j]) i++;
            else j--;
        }
        return maxi;
        
        
    }
};