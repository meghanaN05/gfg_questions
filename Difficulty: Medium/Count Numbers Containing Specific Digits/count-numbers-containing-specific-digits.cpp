class Solution{
  public:  

int countValid(int n, vector<int>& arr) {
    unordered_set<int> arrSet(arr.begin(), arr.end());
    
   
    vector<int> allowed;
    for (int d = 0; d <= 9; ++d) {
        if (!arrSet.count(d)) allowed.push_back(d);
    }

    int k = allowed.size();  
    if (k == 0) return 9 * pow(10, n - 1); 

    int count_non_zero = 0;
    for (int d : allowed) {
        if (d != 0) count_non_zero++;
    }

    if (count_non_zero == 0) return 9 * pow(10, n - 1);  
    int total = 9 * pow(10, n - 1);
    
    
    int invalid = count_non_zero * pow(k, n - 1);

    return total - invalid;
}
};