class Solution {
public:
//ARJAV
    vector<int> twoSum(vector<int>& nums, int target) {
        int l,i,j,result, a=-1;
        vector<int> final;
        l=nums.size();
        for(i=0;i<l;i++)
        {  result=0;
             if(i==a)
        {
            continue;
        }
        else{
            result=target-nums[i];
            for(j=0;j<l;j++)
            {   if(i==j)
            {
                continue;
            }
                if(nums[j]==result)
                {  a=j;
                   final.push_back(i);
                   final.push_back(j);
                }
            }
        }
        }
      return final;  
    }
};