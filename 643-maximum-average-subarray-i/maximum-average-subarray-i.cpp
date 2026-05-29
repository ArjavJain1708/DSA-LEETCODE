class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     double currentSum = 0;
        
        // 1. Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }
        
        double maxAverage = currentSum / k;
        
        // 2. Slide the window across the rest of the array
        for (int i = k; i < nums.size(); i++) {
            // Add the new element, subtract the old one
            currentSum += nums[i] - nums[i - k];
            
            // Update maxAverage if the new one is higher
            maxAverage = max(maxAverage, currentSum / k);
        }
        
        return maxAverage;
    }
};