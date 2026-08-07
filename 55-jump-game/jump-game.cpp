class Solution {
public:
int helper(int idx,vector<int>&nums,vector<int>&dp,int target){
    if(idx>=target){
        return 1;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    if (nums[idx] == 0) {
            return dp[idx] = 0; // Stuck at a 0, cannot move forward
        }
    int way=0;
    for(int i=1;i<=nums[idx];i++){
        if (helper(idx + i, nums, dp, target) == 1) {
                return dp[idx] = 1; // If any path works, memoize and return true
            }
    }
    return dp[idx]=0;
  
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int ans=helper(0,nums,dp,nums.size()-1);
        if(ans==0){
            return false;
        } 
        else{
            return true;
        }
    }
};
