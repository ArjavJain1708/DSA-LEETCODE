class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=INT_MAX;
        int closesum=0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1;
            int right = n - 1;
             while (left < right) {
            int sum=nums[left]+nums[right]+nums[i];
            closest=min(abs(target-sum),closest);
              if(closest==abs(target-sum)){
               closesum=sum;
                          }
                 if (sum < target) {
                    left++;  // We need a bigger sum, move left pointer right
                } else if (sum > target) {
                    right--; // We need a smaller sum, move right pointer left
                } else {
                    // If the sum matches the target exactly, difference is 0. 
                    // You can't get any closer than that!
                   return target;
                }
            }
            }
        
 return closesum;  }
};
 