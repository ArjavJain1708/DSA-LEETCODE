class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Candidate 1: The three largest numbers
        long long option1 = (long long)nums[n-1] * nums[n-2] * nums[n-3];
        
        // Candidate 2: The two smallest (negative) numbers * largest number
        long long option2 = (long long)nums[0] * nums[1] * nums[n-1];
        
        // Return whichever is bigger
        return max(option1, option2);
    }
};