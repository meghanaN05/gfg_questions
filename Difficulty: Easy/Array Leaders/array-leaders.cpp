//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        int n = arr.size(); // Get the size of the array

        int current_max = arr[n - 1]; // Initialize with the last element

        // We start traversing the array from the last element.
        for (int i = n - 1; i >= 0; i--) {
            // Comparing the current element with the maximum element stored.
            // If current element is greater than or equal to the max, we add the
            // element.
            if (arr[i] >= current_max) {
                current_max = arr[i]; // Updating the maximum element.
                v.push_back(
                    current_max); // Storing the current element in vector for leaders.
            }
        }
        // Finally reversing the vector in which leaders are stored.
        reverse(v.begin(), v.end());
        // Returning the vector.
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.leaders(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no leaders are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends