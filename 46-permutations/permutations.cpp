class Solution {
private:
    void helper(int idx, vector<int>& nums, vector<vector<int>>& result) {
        // Base case: if we reach the end, add the current permutation to result
        if (idx == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        // Try swapping every element into the current 'idx' position
        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);     // Make choice
            helper(idx + 1, nums, result); // Explore
            swap(nums[idx], nums[i]);     // Backtrack (undo choice)
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        helper(0, nums, result);
        return result;
    }
};