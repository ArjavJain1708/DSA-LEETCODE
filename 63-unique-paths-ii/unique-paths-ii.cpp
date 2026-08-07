class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        // If the starting block itself has an obstacle, 0 paths possible
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        
        // Start block has 1 way to be on
        obstacleGrid[0][0] = 1;
        
        // 1. Initialize the first column (handle the obstacle rule for col 0)
        for (int i = 1; i < m; i++) {
            if (obstacleGrid[i][0] == 1 || obstacleGrid[i - 1][0] == 0) {
                obstacleGrid[i][0] = 0; // Blocked or past a block
            } else {
                obstacleGrid[i][0] = 1; // Clear path from above
            }
        }
        
        // 2. Initialize the first row (handle the obstacle rule for row 0)
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[0][j] == 1 || obstacleGrid[0][j - 1] == 0) {
                obstacleGrid[0][j] = 0; // Blocked or past a block
            } else {
                obstacleGrid[0][j] = 1; // Clear path from the left
            }
        }
        
        // 3. Fill the rest of the DP grid using standard unique paths logic
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 1) {
                    obstacleGrid[i][j] = 0; // Obstacle cell gets 0 ways
                } else {
                    obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
                }
            }
        }
        
        // The bottom-right corner holds the final answer
        return obstacleGrid[m - 1][n - 1];
    }
};