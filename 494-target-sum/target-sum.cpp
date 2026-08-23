class Solution {
       /* if(idx==n){
            if(target==0){
              return 1;
            }
            return 0;
        }
            if(dp[idx][target]!=-1){
                return dp[idx][target];
            }

            int reduce=helepr(idx+1,target+1,nums,dp);
            int increase=helper(idx+1,target-1,nums,dp);

            return (dp[idx][target]=(reduce+increase)); 
            */
public:
    int helper(int idx, int target, vector<int>& nums) {
        // Base case: if we've considered all numbers
        if (idx == nums.size()) {
            return (target == 0) ? 1 : 0;
        }
        
        // Offset or check bounds if negative targets are possible, 
        // but assuming standard subset sum conversion or using a map/shifting for negative indices.
        // Below is the standard recursive structure:
        
        int reduce = helper(idx + 1, target - nums[idx], nums);
        int increase = helper(idx + 1, target + nums[idx], nums);

        return reduce + increase;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        // Call helper starting from index 0 and the given target

        return helper(0, target, nums);
    }
};