
class Solution {
public:
    int factorial(int n) {
        int res = 1;
        for (int i = 2; i <= n; ++i)
            res *= i;
        return res;
    }

    int vowelCount(string& s) {
        string vowels = "aeiou";
        unordered_map<char, int> vowelCount;

        for (char ch : s) {
            if (vowels.find(ch) != string::npos) {
                vowelCount[ch]++;
            }
        }

        if (vowelCount.empty()) return 0;

        int waysToChoose = 1;
        int distinctVowelCount = 0;

        for (auto& pair : vowelCount) {
            waysToChoose *= pair.second;
            distinctVowelCount++;
        }

        return waysToChoose * factorial(distinctVowelCount);
    }
};