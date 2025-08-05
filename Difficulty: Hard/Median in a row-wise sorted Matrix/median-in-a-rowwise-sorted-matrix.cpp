class Solution {
public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 1;      
        int high = 1e9;   
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0;
            
            for (int i = 0; i < n; i++) {
                count += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }
            
            if (count <= (n * m) / 2)
                low = mid + 1;
            else
                high = mid;
        }
        
        return low;
    }
};

