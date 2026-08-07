class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
     dp[0] = nums[0];
     int max_sum=nums[0];
      for(int i=1;i<nums.size();i++){
        int pick=nums[i]+dp[i-1];
        int not_pick=nums[i];
        if(pick>=not_pick){
            dp[i]=pick;
        }
        else{
            dp[i]=not_pick;
        }
        max_sum = max(max_sum, dp[i]);
      }
      return max_sum;
    }
};