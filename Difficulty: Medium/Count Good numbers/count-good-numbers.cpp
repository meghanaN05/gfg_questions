class Solution {
public:
    static const int M = 1e9 + 7;

    long long findpower(long long a, long long b) {
        if (b == 0) return 1;
        long long half = findpower(a, b / 2);
        long long result = (half * half) % M;
        if (b % 2 == 1)
            result = (result * a) % M;

        return result;
    }

    int countGoodNumbers(long long n) {
        long long c1 = findpower(4, n / 2);
        long long c2 = findpower(5, (n + 1) / 2);
        return (c1 * c2) % M;
    }
};
