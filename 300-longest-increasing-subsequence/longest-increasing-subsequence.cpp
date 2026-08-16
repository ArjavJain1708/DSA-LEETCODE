class Solution {
public:
//TLE
/*void helper(int idx,int size,vector<int>&current,int *max,vector<int>&nums){
     // size bhi pass kardete hai current ka 
       if(size>*max){
           *max=size;
       }
       if(idx>=nums.size()){
           return;
       }
      if (size == 0 || nums[idx] > current.back()) {
            current.push_back(nums[idx]);
            helper(idx + 1, size + 1, current, max, nums);
            current.pop_back();
        }
       helper(idx+1,size,current,max,nums);
       return ;
}*/
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
       int n=nums.size();
int maxi=1;
    vector<int>current(n,1);
    current[0]=1;
     for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    current[i] = max(current[i], current[j] + 1);
                }
            }
            maxi = max(maxi, current[i]);
        }
        return maxi;
     //  helper(0,0,current,&max,nums);
     //  return max;
    }
};