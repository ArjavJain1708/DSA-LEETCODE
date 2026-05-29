class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,count,maxcount=0,j;
        while(i<nums.size())
        {    if(nums[i]==1)
            { count =0;
                j=i;
            while(j<nums.size()&&nums[j]==1)
             {
                count+=1;
                j++;
            }
            if(count>maxcount)
               {maxcount=count;}   
              i=j+1;
             }
             else{
                i++;
             }
              }
  return maxcount;  }
};