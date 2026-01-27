class Solution {
  public:
  
   bool backtrack(int i,int j,vector<vector<char>> &mat, string &word,int index,int n,int m){
       if(index==word.size()) return true; 
       if(i<0 || j<0 || i>=n || j>=m) return false;
       if(mat[i][j]==word[index]){
           char temp=mat[i][j];
           mat[i][j]='*';
           bool res=backtrack(i+1,j,mat,word,index+1,n,m)||backtrack(i,j+1,mat,word,index+1,n,m)||backtrack(i-1,j,mat,word,index+1,n,m)||backtrack(i,j-1,mat,word,index+1,n,m);
           mat[i][j]=temp;
           return res;
       }
       return false;
   }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        int n=mat.size();
        int m=mat[0].size();
        if(word.size()>n*m) return false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==word[0]){
                    if(backtrack(i,j,mat,word,0,n,m)) return true;
                }
            }
        }
        return false;
        
    }
};