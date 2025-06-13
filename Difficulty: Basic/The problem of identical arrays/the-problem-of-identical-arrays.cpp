class Solution {
  public:
    bool isIdentical(vector<int> &a, vector<int> &b) {
        const int MAX = 1e5 + 1;
        vector<int> freqA(MAX, 0), freqB(MAX, 0);

        for (int val : a) {
            freqA[val]++;
        }

        for (int val : b) {
            freqB[val]++;
        }

        
        return freqA == freqB;
    }
};
