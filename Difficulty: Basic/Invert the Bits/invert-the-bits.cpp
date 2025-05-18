//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    unsigned int invertBits(unsigned int N) {
        return ~N & 0xFFFFFFFF;
    }
};


//{ Driver Code Starts.
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
        long long int N;
        cin>>N;
        Solution ob;
        cout<<ob.invertBits(N)<<"\n";
	
cout << "~" << "\n";
}
} 
// } Driver Code Ends