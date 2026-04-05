// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        int average=0;
        sort(bt.begin(),bt.end());
        int sum=0;
        int waittime=0;
        for(int i=0;i<bt.size();i++){
            waittime+=sum;
            sum+=bt[i];
        
        }

        return waittime/bt.size();
    }
};