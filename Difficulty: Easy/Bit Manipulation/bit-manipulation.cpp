//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void bitManipulation(unsigned int num, int i) {
      
        int bitPosition = i - 1;


        int ithBit = (num >> bitPosition) & 1;

        
        unsigned int setBit = num | (1 << bitPosition);

    
        unsigned int clearBit = num & ~(1 << bitPosition);

    
        cout << ithBit << " " << setBit << " " << clearBit;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends