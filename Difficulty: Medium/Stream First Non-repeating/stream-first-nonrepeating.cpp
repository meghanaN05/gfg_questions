class Solution {
  public:
    string firstNonRepeating(string &s) {
         int n = s.size();
    vector<int> freq(26, 0);       
    vector<int> firstPos(26, -1);   
    for (int i = 0; i < n; i++) {
        if (firstPos[s[i] - 'a'] == -1)
            firstPos[s[i] - 'a'] = i;
    }
    string result = "";
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
        char chosen = '#';
        int earliest = n + 1;
        for (int j = 0; j < 26; j++) {
            if (freq[j] == 1 && earliest > firstPos[j]) {
                chosen = char(j + 'a');
                earliest = firstPos[j];
            }
        }
        result += chosen;
    }
    
    return result;
        
    }
};