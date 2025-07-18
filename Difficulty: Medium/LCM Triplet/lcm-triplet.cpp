class Solution {
  public:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
    }

    int lcmTriplets(int n) {
        long long res = 0;
        if (n <= 2) return n;

        if (n % 2 != 0) {
           
            res = lcm(n, lcm(n - 1, n - 2));
        } else {
         
            if (n % 3 != 0) {
               
                res = lcm(n, lcm(n - 1, n - 3));
            } else {
             
                res = lcm(n - 1, lcm(n - 2, n - 3));
            }
        }
        return res;
    }
};
