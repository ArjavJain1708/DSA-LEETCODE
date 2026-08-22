class Solution {
private:
    int memo[505][505];
    
    int solve(int start, int end, const vector<int>& piles) {
        
        if (start > end) return 0;
        if (memo[start][end] != -1) return memo[start][end];

        int take_start = piles[start] - solve(start + 1, end, piles);
        int take_end = piles[end] - solve(start, end - 1, piles);
        
        return memo[start][end] = max(take_start, take_end);
    }

public:
    bool stoneGame(vector<int>& piles) {
        memset(memo, -1, sizeof(memo));
        return solve(0, piles.size() - 1, piles) > 0;
    }
};