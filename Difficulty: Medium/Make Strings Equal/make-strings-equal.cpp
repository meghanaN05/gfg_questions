class Solution {
public:
    int minCost(string s, string t, vector<vector<char>>& transform, vector<int>& cost) {
        const int INF = 1e9;
        int n = s.size();

        // Step 1: initialize distance matrix
        vector<vector<int>> dist(26, vector<int>(26, INF));
        for (int i = 0; i < 26; i++) dist[i][i] = 0;

        // Fill edges
        for (int i = 0; i < transform.size(); i++) {
            int u = transform[i][0] - 'a';
            int v = transform[i][1] - 'a';
            dist[u][v] = min(dist[u][v], cost[i]);
        }

        // Step 2: Floyd-Warshall
        for (int k = 0; k < 26; k++) {
            for (int i = 0; i < 26; i++) {
                for (int j = 0; j < 26; j++) {
                    if (dist[i][k] < INF && dist[k][j] < INF)
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        // Step 3: evaluate each position
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int a = s[i] - 'a';
            int b = t[i] - 'a';

            long long best = 1e18;
            for (int c = 0; c < 26; c++) {
                if (dist[a][c] < INF && dist[b][c] < INF) {
                    best = min(best, (long long)dist[a][c] + dist[b][c]);
                }
            }

            if (best == 1e18) return -1; 
            ans += best;
        }

        return ans;
    }
};
