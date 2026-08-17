class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, -1));
        
        // Step 1: Push all land cells into the queue with distance 0
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        
        // If there are no land cells or no water cells, return -1
        if (q.empty() || q.size() == n * m) {
            return -1;
        }
        
        int maxDist = -1;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        
        // Step 2: BFS outward from all land cells simultaneously
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            
            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                
                // If the neighbor is within bounds and unvisited (water)
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    maxDist = max(maxDist, dist[nr][nc]);
                    q.push({nr, nc});
                }
            }
        }
        
        return maxDist;
    }
};