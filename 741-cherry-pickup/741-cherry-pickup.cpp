class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int N = grid.size();
        vector<vector<int>> dp(N, vector<int>(N, -1));
        dp[0][0] = grid[0][0];
        for (int k = 1, maxK = 2*N-2; k <= maxK; ++k) {
            for (int i = min(N-1, k); i >= 0; --i) {
                if (k - i >= N) continue;
                for (int j = min(N-1, k); j >= 0; --j) {
                    if (k - j >= N || grid[i][k - i] < 0 || grid[j][k - j] < 0) {
                        dp[i][j] = -1;
                        continue;
                    }
                    int cherris = dp[i][j];
                    if (i > 0)  cherris = max(cherris, dp[i-1][j]);
                    if (j > 0)  cherris = max(cherris, dp[i][j-1]);
                    if (i > 0 && j > 0)  cherris = max(cherris, dp[i-1][j-1]);
                    if (cherris < 0)    continue;
                    dp[i][j] =  cherris + grid[i][k-i];
                    if (i != j) dp[i][j] += grid[j][k-j];
                }
            }
        }
        return max(0, dp[N-1][N-1]);
    }
        
    
};