class Solution {
  public:
    bool isPossible(vector<int>& arr, int k) {
       unordered_map<int, int> freq, need;
    for (int x : arr) freq[x]++;

    for (int x : arr) {
        if (freq[x] == 0) continue;

        if (need[x] > 0) {
            need[x]--;
            need[x + 1]++;
            freq[x]--;
        } 
        else {
            bool possible = true;
            for (int i = 0; i < k; i++) {
                if (freq[x + i] <= 0) {
                    possible = false;
                    break;
                }
                freq[x + i]--;
            }
            if (!possible) return false;
            need[x + k]++;
        }
    }
    return true;
    }
};
