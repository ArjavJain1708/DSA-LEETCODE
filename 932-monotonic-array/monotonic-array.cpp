class Solution {
public:
//ARJAV
    bool isMonotonic(vector<int>& nums) {
        int i,r=0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                r++;
            }
            // if(nums[i]>=nums[i+1]){
            //     r--;
            // }
        }
        if(abs(r)==nums.size()-1){
            return true;
        }
        r=0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                r++;
            }
        }
        if(abs(r)==nums.size()-1){
            return true;
        }
   return false; }
};