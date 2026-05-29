class Solution {
public:
//ARJAV
    int majorityElement(vector<int>& nums) {
        int count=0;
        int k=nums.size();
        for(int i=0;i<nums.size();i++){
            count=0;
            int temp=nums[i];
            for(int j=0;j<nums.size();j++){
             if(nums[j]==temp){
                count++;
                nums.erase(nums.begin()+j);
                j--;
             }
            }
            if(count>k/2){
                return temp;
            }
        }
  return 0;  }
};