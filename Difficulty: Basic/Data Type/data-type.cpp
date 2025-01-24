//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    // Function to determine the size of different data types.
    int dataTypeSize(string str) {
        if (str == "Character")
            return sizeof(char);
        else if (str == "Integer")
            return sizeof(int);
        else if (str == "Float")
            return sizeof(float);
        else if (str == "Long")
            return sizeof(long);
        else if (str == "Double")
            return sizeof(double);
        else
            return -1; // Return -1 if the input data type is not valid.
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends