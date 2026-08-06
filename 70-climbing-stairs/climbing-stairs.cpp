class Solution {
public:
int helper(int target,vector<int>&dp){
    if(target==0){
      return 1;
    }
    if(dp[target]!=-1){
        return dp[target];
    }
   // taking 1 step
   int way1=helper(target-1,dp);
   // taking 2 step
   int way2=0;
   if(target-2>=0){
   way2=helper(target-2,dp);
   }
return (dp[target]=way1+way2);
}
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
        int ans=helper(n,dp);
   return ans; 
   }
};