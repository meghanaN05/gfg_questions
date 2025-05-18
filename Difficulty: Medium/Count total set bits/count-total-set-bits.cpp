//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countSetBits(int n) {
        int count = 0;
        n++; // We count from 1 to n, so we use n + 1 for easy pattern handling

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

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  
cout << "~" << "\n";
}
	  return 0;
}

// } Driver Code Ends