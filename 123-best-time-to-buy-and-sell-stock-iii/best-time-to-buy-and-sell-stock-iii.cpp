class Solution {
public:
    int solve(int index, int holding, int limit, vector<int>& prices, vector<vector<vector<int>>>& memo) {
        if (index == prices.size() || limit == 0) {
            return 0;
        }

        if (memo[index][holding][limit] != -1) {
            return memo[index][holding][limit];
        }
        
        int profit = 0;
        if (holding == 0) {
            int buyIt = -prices[index] + solve(index + 1, 1, limit, prices, memo);
            int skipIt = solve(index + 1, 0, limit, prices, memo);
            profit = max(buyIt, skipIt);
        } else {
            int sellIt = prices[index] + solve(index + 1, 0, limit - 1, prices, memo);
            int skipIt = solve(index + 1, 1, limit, prices, memo);
            profit = max(sellIt, skipIt);
        }
        
        return memo[index][holding][limit] = profit;
    }

    int maxProfit(vector<int>&prices){
         vector<vector<vector<int>>>memo(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        int ans=solve(0,0,2,prices,memo);
        return ans;
    }
};