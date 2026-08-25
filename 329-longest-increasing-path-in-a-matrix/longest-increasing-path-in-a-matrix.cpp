class Solution {
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    int m, n;

    int dfs(int r, int c, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
        if (dp[r][c] != 0) return dp[r][c]; // Return cached result
        
        int maxLen = 1;
        for (int i = 0; i < 4; ++i) {
            int nr = r + dx[i], nc = c + dy[i];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n && matrix[nr][nc] > matrix[r][c]) {
                maxLen = max(maxLen, 1 + dfs(nr, nc, matrix, dp));
            }
        }
        return dp[r][c] = maxLen; // Memoize and return
    }

public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.empty()) return 0;
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                ans = max(ans, dfs(i, j, matrix, dp));
            }
        }
        return ans;
    }
};