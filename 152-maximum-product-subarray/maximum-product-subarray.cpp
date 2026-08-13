class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        vector<vector<long long>> dp(n, vector<long long>(2, 0));
        
        dp[0][0] = nums[0];
        dp[0][1] = nums[0];
        long long ans = nums[0];
        
        for (int i = 1; i < n; i++) {
            if (nums[i] >= 0) {
                dp[i][0] = max((long long)nums[i], dp[i - 1][0] * nums[i]);
                dp[i][1] = min((long long)nums[i], dp[i - 1][1] * nums[i]);
            } else {
                
                dp[i][0] = max((long long)nums[i], dp[i - 1][1] * nums[i]);
                dp[i][1] = min((long long)nums[i], dp[i - 1][0] * nums[i]);
            }
            ans = max(ans, dp[i][0]);
        }
        
        return ans;
    }
};