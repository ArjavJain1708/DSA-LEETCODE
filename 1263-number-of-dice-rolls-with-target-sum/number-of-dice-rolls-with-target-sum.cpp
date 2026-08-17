class Solution {
public:
int helper(int idx,int k,int target,int n,vector<vector<int>>&dp){
    if(idx>n){
      if(target==0){
       return 1;
      }
      return 0;
    }
    if(dp[idx][target]!=-1){
        return dp[idx][target];
    }
    long long int count=0;
    for(int i=1;i<=k;i++){
        if(target-i>=0){
       // count+=helper(idx+1,k,target-i,n,dp)%(1e9+7);
       count=(count + helper(idx + 1, k, target - i, n, dp)) % 1000000007;
       //1e9+7 not working
        }
        else{
            continue;
        }
    }
    return (dp[idx][target]=count);
}
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        int count=helper(1,k,target,n,dp);
        return count;
    }
};