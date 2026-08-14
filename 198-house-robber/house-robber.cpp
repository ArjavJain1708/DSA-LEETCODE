class Solution {
public:
int helper(int idx,int holding,vector<int>&nums,vector<vector<int>>&dp){
    // holding last house money
    if(idx==nums.size()){
        return 0;
    }
    if(dp[idx][holding]!=-1){
        return dp[idx][holding];
    }
    int not_loot=0;
    int loot=0;
    int not_not_loot=0;
    int maxi=0;
    if(holding==1){
       not_loot=helper(idx+1,0,nums,dp);
    }
    else{
       loot=nums[idx]+helper(idx+1,1,nums,dp);
       not_not_loot=helper(idx+1,0,nums,dp);
       
    }
  return(dp[idx][holding]=max({loot,not_loot,not_not_loot}));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
       vector<vector<int>>dp(n,vector<int>(2,-1));
 int ans=helper(0,0,nums,dp);
 return ans;
       }
};