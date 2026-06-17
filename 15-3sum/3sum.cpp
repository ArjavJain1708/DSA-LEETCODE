class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>> ans;
    
  
      // TLE 311/316
//      int count =0;
     
//       while(left < (int)nums.size() - 1){
//         for(int i=0;i<nums.size();i++){
//             if(i==left||i==right){
//                 continue;
//             }
//             if(nums[left]+nums[right]+nums[i]==0){
//               vector<int> triplet = {nums[left], nums[right], nums[i]};
//               sort(triplet.begin(), triplet.end());  
//               ans.push_back(triplet);
//                                                  }
//         } 
//         right--;
//         if (right <= left) { 
//     // Once right reaches left, we have tested all pairs for this specific 'left'
//     left++;                  // Advance left to the next anchor position
//     right = nums.size() - 1; // RESET right back to the end of the array!
//                           }

//         }
//    std::sort(ans.begin(), ans.end());
//     ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
//      return ans; 
 sort(nums.begin(),nums.end());
 int n = nums.size();
        
        // Step 1: Sort the array up front (Your strategy!)
        sort(nums.begin(), nums.end());
        
        // Step 2: Use a clean loop to anchor the first element
        for (int i = 0; i < n - 2; i++) {
            
            // Optimization: If the anchor is positive, a zero sum is impossible
            if (nums[i] > 0) break;
            
            // Skip duplicate values for the anchor to keep results unique
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Step 3: Set up your Two-Pointer window in the remaining space
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // Elements are already in ascending order because the array is sorted!
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    // Your strategy: Skip adjacent duplicate values to prevent duplicate triplets
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move both inward to keep searching for this anchor
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // Your strategy: Sum is too small, move left up to get a bigger value
                    left++; 
                } 
                else {
                    // Your strategy: Sum is too large, move right down to get a smaller value
                    right--; 
                }
            }
        }
        return ans;

 }
};