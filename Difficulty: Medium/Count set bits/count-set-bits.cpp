class Solution {
public:
    int largestPowerOf2(int n) {
        int p = 0;
        while ((1 << (p + 1)) <= n)
            p++;
        return p;
    }
    int countSetBits(int n) {
        if (n == 0) return 0;
        int p = largestPowerOf2(n);
        // 1) Bits contributed by cycles of MSB
        int bitsUpto2p = p * (1 << (p - 1));
        // 2) Bits contributed by MSB from 2^p to n
        int msbBits = n - (1 << p) + 1;
        // 3) Remaining bits
        int rest = countSetBits(n - (1 << p));
        return bitsUpto2p + msbBits + rest;
    }
};
