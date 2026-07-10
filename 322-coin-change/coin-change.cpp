class Solution {
public:
  
    int helper(vector<int>& coins, int amount) {
        int n = coins.size();
       
        vector<vector<int>> dp(n, vector<int>(amount + 1, amount + 1));

      
        for (int i = 0; i < n; i++) dp[i][0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= amount; j++) {
               
                int not_pick = (i > 0) ? dp[i - 1][j] : amount + 1;
                
                // Pick
                int pick = amount + 1;
                if (coins[i] <= j) {
                    pick = 1 + dp[i][j - coins[i]];
                }
                
                dp[i][j] = min(pick, not_pick);
            }
        }

        return (dp[n - 1][amount] > amount) ? -1 : dp[n - 1][amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        return helper(coins, amount);
    }
};