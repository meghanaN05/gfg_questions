class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        vector<bool>vis(maxi+1,0);
        for(int i=0;i<arr.size();i++)
        vis[arr[i]]=true;
        for(int i=1;i<maxi+1;i++){
            if(vis[i]==false) continue;
            for(int j=1;j<maxi+1;j++){
                if(vis[j]==false) continue;
                int c=sqrt(i*i+j*j);
                if((c*c!=(i*i+j*j))|| c>maxi) continue;
                 if(vis[c]==true) return true;
            }
        }
        return false;
    }
};