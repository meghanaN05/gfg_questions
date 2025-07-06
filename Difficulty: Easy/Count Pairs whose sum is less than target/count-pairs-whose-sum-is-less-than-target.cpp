// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
       int j=arr.size()-1;
       int i=0;
       int count=0;
       while(j<arr.size() && i<arr.size() && i<j){
           if(i!=j && arr[i]+arr[j]<target){
              count+=(j-i);
              i++;
           }
           else{
                   j--;
           }
       
           
       }
       return count;
    }
};
