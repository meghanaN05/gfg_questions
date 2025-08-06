// User function Template for C++
#include <iostream>
using namespace std;

class Solution {
public:
    void printPattern(int N) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << '*';
            }
            cout << ' ';
        }
    }
};
