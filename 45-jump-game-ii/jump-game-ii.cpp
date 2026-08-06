class Solution {
public:
int helper(int idx,vector<int>&nums,vector<int>&dp,int target){
    if(idx==target){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int way=0;
    int min_steps=1e9;
    for(int i=1;i<=nums[idx];i++){
    if(idx+i<=target){
        way=1 + helper(idx+i,nums,dp,target);
         if(way<min_steps){
        min_steps=way;
    }
    }
    }
    return (dp[idx]=min_steps);
    }

    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int ans=helper(0,nums,dp,nums.size()-1);
        return ans;
    }
};