class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int high=nums.size()-1,i=0,j;
        int temp;
        
        while(i<high)
        { 
            if(nums[i]==0)
            {
                swap(nums[i],nums[high]);
                temp=nums[i];
                for(j=i;j<high-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                high--;
                if(high>0){
                nums[high]=temp;
                }
                
               // reverse(nums.begin()+i,nums.end()-(nums.size()-1-high));
                
            }
            else{
               i++;
               
            }
        }
    }
};