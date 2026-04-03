class Solution {
public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<pair<int,int>> time;
        for(int i = 0; i < n; i++) {
            time.push_back({end[i], start[i]});
        }
        sort(time.begin(), time.end());
        int cnt = 0;
        int curr_end = -1;
        for(int i = 0; i < n; i++) {
            int s = time[i].second;
            int e = time[i].first;
            if(s > curr_end) {  
                cnt++;
                curr_end = e;
            }
        }

        return cnt;
    }
};