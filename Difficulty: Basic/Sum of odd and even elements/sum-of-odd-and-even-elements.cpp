//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        vector<int>ans;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i+=2){
            sum1+=i;
        }
        ans.push_back(sum1);
         for(int i=2;i<=n;i+=2){
            sum2+=i;
        }
        ans.push_back(sum2);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int> ans = ob.findSum(n);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends