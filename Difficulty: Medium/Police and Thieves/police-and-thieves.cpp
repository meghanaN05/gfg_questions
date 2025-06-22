class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        
       int n=arr.size();
       queue<int>po,the;
       for(int i=0;i<n;i++){
           if(arr[i]=='P'){
               po.push(i);
           }
           else{
               the.push(i);
           }
       }
       int count=0;
       while(!po.empty() && !the.empty()){
           int p=po.front();
           int t=the.front();
           if(abs(p-t)<=k){
                count++;
           po.pop();
           the.pop();
             
           }
         
       
       else if(t<p) the.pop();
       else   po.pop();
       }
       return count;
        
    }
};