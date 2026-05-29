class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int l=nums.size();
        vector<int> remove;
        int i=0,j=0;
       for(i=0;i<l;i++)
       {
        if(nums[i]==val)
        {
            nums.erase(nums.begin()+i);
            l=nums.size();
            i--;
        }
        
       }
        return nums.size();
    }
};