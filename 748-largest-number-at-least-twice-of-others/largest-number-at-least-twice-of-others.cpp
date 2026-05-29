class Solution {
public:
    int dominantIndex(vector<int>& nums) {
      vector<int> store;
      int i;
      store=nums;
      sort(store.begin(),store.end());
      if(store[store.size()-1]>=2*store[store.size()-2])  
      {
        for(i=0;i<nums.size();i++)
        {
            if(store[store.size()-1]==nums[i])
            {
                return i;
            }
        }
      }
      else{
        return -1;
      }
   return 0; }
};