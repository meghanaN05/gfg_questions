//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> prefixIndex;
        int prefix_sum = 0, max_len = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefix_sum += arr[i];

            if (prefix_sum == k) {
                max_len = i + 1;
            }

            if (prefixIndex.find(prefix_sum - k) != prefixIndex.end()) {
                max_len = max(max_len, i - prefixIndex[prefix_sum - k]);
            }

            
            if (prefixIndex.find(prefix_sum) == prefixIndex.end()) {
                prefixIndex[prefix_sum] = i;
            }
        }

        return max_len;
    }


};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends