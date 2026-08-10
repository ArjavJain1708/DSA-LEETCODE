class Solution {
public:
int helper(int idx,vector<int>&prices,int holding,vector<vector<int>>&dp){
    if(idx==prices.size()){
        return 0;    }
    if(dp[idx][holding]!=-1){
        return dp[idx][holding];
    }
    // three options if stock==1
    int keep_stock;
    int sell_stock;
    int profit=0;
    int keep_0;
    int buy_0;
if(holding==1){
keep_stock=helper(idx+1,prices,holding,dp);

sell_stock=prices[idx]+helper(idx+1,prices,0,dp);
profit=max(keep_stock,sell_stock);

}
else{
    keep_0=helper(idx+1,prices,holding,dp);
    buy_0=-prices[idx]+helper(idx+1,prices,1,dp);
    profit=max(keep_0,buy_0);
    }
return (dp[idx][holding]=profit);

}
    int maxProfit(vector<int>& prices) {
   
       vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
       int ans=helper(0,prices,0,dp);
       return ans;
    }
};