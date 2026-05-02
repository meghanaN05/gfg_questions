class Solution {
  public:
    int findPosition(int n) {
        vector<int>ans={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 
    32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 
    8388608, 16777216, 33554432, 67108864};
    for(int i=0;i<ans.size();i++){
        if(n==ans[i]){
            return i+1;
        }
       
    }
        return -1;
        
    }
};