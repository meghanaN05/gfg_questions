class Solution {
  public:

  bool possible(double mid, vector<int> &stations, int k){
      int required = 0;
      for(int i = 1; i < stations.size(); i++){
          double gap = stations[i] - stations[i-1];
          required += ceil(gap / mid) - 1;
      }
      return required <= k;
  }

  double minMaxDist(vector<int> &stations, int K) {
      double l = 0;
      double r = stations.back() - stations.front();
      double ans = r;
      for(int i = 0; i < 100; i++){
          double mid = (l + r) / 2;
          if(possible(mid, stations, K)){
              ans = mid;
              r = mid;
          }
          else{
              l = mid;
          }
      }
      return ans;
  }
};