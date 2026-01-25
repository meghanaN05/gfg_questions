// User function Template for C++

class Solution {
  public:
   void mintomaxheap(vector<int>&arr,int i){
       int largest=i;
       int l=2*i+1;
       int r=2*i+2;
       if(l<arr.size() && arr[l]>arr[i]){
           largest=l;
       }
              if(r<arr.size() && arr[r]>arr[largest]){
           largest=r;
       }
       if(largest!=i){
           swap(arr[i],arr[largest]);
           mintomaxheap(arr,largest);
       }

   }
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        for(int i=(N-2)/2;i>=0;i--){
            mintomaxheap(arr,i);
        }
    }
};
