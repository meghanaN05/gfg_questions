//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int count=0;
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
       
int number=n;
        while(n!=0){
            int lastdigit=n%10;
            if(lastdigit!=0 && number%lastdigit==0)
            count++;
            n=n/10;
            }
      return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends