class Solution {
private:
    int helper(int idx, int robbedFirst, vector<int>& nums, vector<vector<int>>& dp) {
        if (idx >= nums.size()) {
            return 0;
        }
        
        if (idx == nums.size() - 1 && robbedFirst == 1) {
            return 0;
        }
        
        if (dp[idx][robbedFirst] != -1) {
            return dp[idx][robbedFirst];
        }
        
        int nextRobbedFirst = (idx == 0) ? 1 : robbedFirst;
        
        int robCurrent = nums[idx] + helper(idx + 2, nextRobbedFirst, nums, dp);
        int skipCurrent = helper(idx + 1, robbedFirst, nums, dp);
        
        return dp[idx][robbedFirst] = max(robCurrent, skipCurrent);
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        vector<vector<int>> dp(n, vector<int>(2, -1));
        
        return helper(0, 0, nums, dp);
    }
};