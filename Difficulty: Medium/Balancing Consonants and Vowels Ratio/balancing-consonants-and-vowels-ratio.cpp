class Solution {
  public:
  bool is_vowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
    int countBalanced(vector<string>& arr) {
        // code here
          unordered_map<int, int> freq;
    freq[0] = 1;

    int balance = 0;
    int ans = 0;

    for (const string& s : arr) {
        int v = 0, c = 0;
        for (char ch : s) {
            if (is_vowel(ch)) v++;
            else c++;
        }

        balance += (v - c); 
        ans += freq[balance];

      
        freq[balance]++;
    }

    return ans;

        
    }
};