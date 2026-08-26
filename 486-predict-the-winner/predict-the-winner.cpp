class Solution {
private:
    int helper(int left, int right, int turn, vector<int>& nums, vector<vector<vector<int>>>& dp) {
        // Base case: when only one element is left
        if (left == right) {
            return nums[left];
        }
        
        // Return memoized result if available
        if (dp[left][right][turn] != -1) {
            return dp[left][right][turn];
        }
        
        if (turn == 0) {
            // Player 1's turn: maximize the score difference by picking from left or right
            int pickLeft = nums[left] + helper(left + 1, right, 1, nums, dp);
            int pickRight = nums[right] + helper(left, right - 1, 1, nums, dp);
            return dp[left][right][turn] = max(pickLeft, pickRight);
        } else {
            // Player 2's turn: minimize Player 1's score difference (or maximize Player 2's score)
            // By subtracting the picked number, we track the net score relative to Player 1
            int pickLeft = -nums[left] + helper(left + 1, right, 0, nums, dp);
            int pickRight = -nums[right] + helper(left, right - 1, 0, nums, dp);
            return dp[left][right][turn] = min(pickLeft, pickRight);
        }
    }

public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        // dp[left][right][turn] where left, right range from 0 to n-1, and turn is 0 or 1
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, -1)));
        
        // If the final score difference for Player 1 is >= 0, Player 1 wins or ties
        return helper(0, n - 1, 0, nums, dp) >= 0;
    }
};