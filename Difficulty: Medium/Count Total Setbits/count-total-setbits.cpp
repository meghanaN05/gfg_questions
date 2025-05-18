//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countBits(int n) {
      
        int count = 0;
        n++;  

        for (int i = 0; (1 << i) <= n; i++) {
            int cycleLength = 1 << (i + 1);
            int fullCycles = n / cycleLength;
            int remainder = n % cycleLength;

            count += fullCycles * (cycleLength / 2);
            count += max(0, remainder - (1 << i));
        }

        return count;
   

    }
};


//{ Driver Code Starts.
#define int long long int

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.countBits(N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends