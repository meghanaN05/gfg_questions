//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int oddAndEven(string S) {
        int oddSum = 0, evenSum = 0;

        for (int i = 0; i < S.length(); i++) {
            int digit = S[i] - '0';
            if ((i + 1) % 2 == 1) 
                oddSum += digit;
            else
                evenSum += digit;
        }

        return (oddSum == evenSum) ? 1 : 0;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddAndEven(S) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends