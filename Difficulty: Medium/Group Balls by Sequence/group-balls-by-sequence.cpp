#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validgroup(vector<int> &arr, int k) {
        if (arr.size() % k != 0) return false; // Not divisible into groups

        map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        for (auto &entry : freq) {
            int start = entry.first;
            int count = entry.second;
            if (count == 0) continue;

            // Try to form a group starting from 'start'
            for (int i = 0; i < k; ++i) {
                int val = start + i;
                if (freq[val] < count) {
                    return false; // Not enough to form a full group
                }
                freq[val] -= count;
            }
        }

        return true;
    }
};
