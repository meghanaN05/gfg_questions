// User function Template for C++

class Solution {
  public:
    int pageFaults(int N, int C, int pages[]) {
        vector<int> memory;
        int faults = 0;
        for(int i = 0; i < N; i++) {
            int page = pages[i];
            auto it = find(memory.begin(), memory.end(), page);
            if(it == memory.end()) {
                faults++;
                if(memory.size() == C) {
                    memory.erase(memory.begin());
                }
            } else {
                memory.erase(it);
            }
            memory.push_back(page);
        }

        return faults;
    }
};