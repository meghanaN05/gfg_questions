#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        vector<int> sortedArr(arr, arr + n);
        sort(sortedArr.begin(), sortedArr.end());

        unordered_map<int, int> indexMap;
        for (int i = 0; i < n; i++) {
            indexMap[arr[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int originalIndex = indexMap[sortedArr[i]];
            if (abs(originalIndex - i) > k) {
                return "No";
            }
        }

        return "Yes";
    }
};
