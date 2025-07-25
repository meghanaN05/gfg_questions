class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
           int totalSum = 0;
    int maxSum = INT_MIN, currMax = 0;
    int minSum = INT_MAX, currMin = 0;

    for (int num : arr) {
       
        currMax = max(num, currMax + num);
        maxSum = max(maxSum, currMax);

   
        currMin = min(num, currMin + num);
        minSum = min(minSum, currMin);

      
        totalSum += num;
    }

    
    if (totalSum == minSum)
        return maxSum;

  
    return max(maxSum, totalSum - minSum);
    }
};