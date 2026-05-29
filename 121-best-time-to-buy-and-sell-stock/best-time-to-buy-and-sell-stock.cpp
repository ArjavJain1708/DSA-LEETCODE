class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         

        if (prices.empty()) return 0;

        int min_so_far = prices[0];
        int max_profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Update the floor (cheapest buy price)
            min_so_far = min(min_so_far, prices[i]);
            
            // Calculate profit if we sold today
            int current_profit = prices[i] - min_so_far;
            
            // Update our record high profit
            max_profit = max(max_profit, current_profit);
        }

        return max_profit;
    }
};