class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        int cnt=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                cnt++;
            }
            else{
                return cnt+1;
            }
        }
        if(cnt==arr.size()-1) return 0;
        
    }
};
