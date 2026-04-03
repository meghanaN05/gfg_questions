/*

struct Job
{
    int id;	 // Job Id
    int deadline; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};
*/

class Solution {
  public:
    // Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) {
        // sort by profit descending
        sort(arr, arr + n, [](Job &a, Job &b){
            return a.profit > b.profit;
        });

        int maxDeadline = 0;
        for(int i = 0; i < n; i++){
            maxDeadline = max(maxDeadline, arr[i].deadline);
        }

        vector<int> slot(maxDeadline + 1, -1);

        int count = 0, profit = 0;

        for(int i = 0; i < n; i++){
            for(int j = arr[i].deadline; j > 0; j--){
                if(slot[j] == -1){
                    slot[j] = i;
                    count++;
                    profit += arr[i].profit;
                    break;
                }
            }
        }

        return {count, profit};
        
    }
};