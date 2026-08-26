class Solution {
public:
int helper(int idx,int target,vector<vector<int>> &dp,vector<int>&coins,int n){
    //n= coins.size()

    if(target==0){
        return 1;
    }
   
    if(idx == n){
        return 0;
    }
    
    if(dp[idx][target]!=-1){
        return dp[idx][target];
    }
    int count1=0;
    int count2=0;
    if(target-coins[idx]>=0){
    count1=helper(idx,target-coins[idx],dp,coins,n);
    }
    count2=helper(idx+1,target,dp,coins,n);
 return dp[idx][target]=count1+count2;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=helper(0,amount,dp,coins,n);
        return ans;
    }
};