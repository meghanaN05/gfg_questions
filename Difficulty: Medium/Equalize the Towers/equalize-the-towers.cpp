class Solution {
  public:
  long long co(vector<int>& heights, vector<int>& cost,int target,int n){
      long long total=0;
      for(int i=0;i<n;i++){
          total+=abs(heights[i]-target)*cost[i];
      }
      return total;
  }
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        long long n=heights.size();
        long long l=*min_element(heights.begin() ,heights.end());
        long long h=*max_element(heights.begin() ,heights.end());
        long long answer=LLONG_MAX;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long c1=co(heights,cost,mid,n);
            long long c2=co(heights,cost,mid+1,n);
            answer=min(c1,c2);
            if(c1<c2){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return answer;
    }
};
