class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        sort(x.rbegin(), x.rend());
        sort(y.rbegin(), y.rend());
         int i = 0, j = 0;
        int hori = 1, vert = 1;
        long long cost = 0;

        for (int k = 0; k < (int)x.size() + (int)y.size(); k++) {
            if (i < x.size() && (j >= y.size() || x[i] >= y[j])) {
                cost += 1LL * x[i] * vert;
                hori++;
                i++;
            } else {
                cost += 1LL * y[j] * hori;
                vert++;
                j++;
            }
        }
       return cost; 
    }
};
