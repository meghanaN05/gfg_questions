class Solution {
  public:
    void print_divisors(int n) {
        vector<int> small, large;
        
        for (int i = 1; i * i <= n; ++i) {
            if (n % i == 0) {
                small.push_back(i);
                if (i != n / i) {
                    large.push_back(n / i);
                }
            }
        }
        
      
        for (int i = 0; i < small.size(); ++i) {
            cout << small[i] << " ";
        }

        
        for (int i = large.size() - 1; i >= 0; --i) {
            cout << large[i] << " ";
        }
    }
};
