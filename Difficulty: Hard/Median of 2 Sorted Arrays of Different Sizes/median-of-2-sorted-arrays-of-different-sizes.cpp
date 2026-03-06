class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
     int n=a.size();
     int m=b.size();
     if(n>m) return medianOf2(b,a);
     int size=n+m;
     int left=(n+m+1)/2;
     int l=0,r=n;
     while(l<=r){
         int mid1=l+(r-l)/2;
         int l1=INT_MIN,l2=INT_MIN;
     int r1=INT_MAX,r2=INT_MAX;
         int  mid2=left-mid1;
         if(mid1<n) r1=a[mid1];
         if(mid2<m) r2=b[mid2];
         if(mid1-1>=0) l1=a[mid1-1];
         if(mid2-1>=0) l2=b[mid2-1];
         if(l1<=r2 && l2<=r1){
             if(size%2==1) return max(l1,l2);
             else return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
         }
         else if(l1>r2) r=mid1-1;
         else l=mid1+1;
     }
      return 0.0;
     
        
    }
};