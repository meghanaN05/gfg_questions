class Solution {
  public:
  int ts(const string& timeStr) {
    int h = stoi(timeStr.substr(0, 2));
    int m = stoi(timeStr.substr(3, 2));
    int s = stoi(timeStr.substr(6, 2));
    return h * 3600 + m * 60 + s;
}
    int minDifference(vector<string> &arr) {
     vector<int> seconds;

    for (const string& timeStr : arr)
        seconds.push_back(ts(timeStr));

    sort(seconds.begin(), seconds.end());

    int minDiff = INT_MAX;
    int n = seconds.size();

    for (int i = 1; i < n; ++i)
        minDiff = min(minDiff, seconds[i] - seconds[i - 1]);

  
    int wrapAroundDiff = 86400 - seconds[n - 1] + seconds[0];
    minDiff = min(minDiff, wrapAroundDiff);

    return minDiff;
    }
};
