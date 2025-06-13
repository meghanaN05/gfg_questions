
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
       int count=0;
        // Code Here
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                 count=count+1;
            }
        }
        return count;
    }
};