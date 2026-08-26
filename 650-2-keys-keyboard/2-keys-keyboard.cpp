class Solution {
private:
    int helper(int curr, int clip, int n, vector<vector<int>>& dp) {
        // Base case: if we reach exactly n characters, 0 more operations needed
        if (curr == n) return 0;
        // If we exceed n, this path is invalid, return a large number (infinity)
        if (curr > n) return 1e9;
        
        if (dp[curr][clip] != -1) {
            return dp[curr][clip];
        }
        
        // Choice 1: Just Paste (costs 1 operation)
        int option1 = 1e9;
        if (clip > 0) {
            option1 = 1 + helper(curr + clip, clip, n, dp);
        }
        
        // Choice 2: Copy All (updates clip to curr) and then Paste (costs 2 operations total)
        int option2 = 1e9;
        if (curr != clip) { 
        // No point in copying if clipboard already has the exact same thing
            option2 = 2 + helper(curr + curr, curr, n, dp);
        }
        
        return dp[curr][clip] = min(option1, option2);
    }

public:
    int minSteps(int n) {
        if (n == 1) return 0;
        // dp[curr][clip]
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        // We start with 1 'A' on screen, and clipboard is initially 0 (or we can think of starting with Copy+Paste)
        // Actually, to start, we must copy the 1 'A' and paste it to make 2, which takes 2 ops:
        return 1 + helper(1, 1, n, dp); // 1 operation to paste the initial copy
    }
};