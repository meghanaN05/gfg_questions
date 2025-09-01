class Solution {
public:
    unordered_map<int,int> freq;
    map<int,set<int>> b;

    void add(int x) {
        int oldf = freq[x];
        if (oldf > 0) {
            b[oldf].erase(x);
            if (b[oldf].empty()) b.erase(oldf);
        }
        freq[x]++;
        b[oldf + 1].insert(x);
    }

    void removeElem(int x) {
        int oldf = freq[x];
        b[oldf].erase(x);
        if (b[oldf].empty()) b.erase(oldf);
        freq[x]--;
        if (freq[x] > 0) {
            b[oldf - 1].insert(x);
        }
    }

    long long sumOfModes(vector<int>& arr, int k) {
        int n = arr.size();
        long long result = 0;
        for (int i = 0; i < n; i++) {
            add(arr[i]);
            if (i >= k) {
                removeElem(arr[i - k]);
            }
            if (i >= k - 1) {
                int mode = *b.rbegin()->second.begin();
                result += mode;
            }
        }
        return result;
    }
};
