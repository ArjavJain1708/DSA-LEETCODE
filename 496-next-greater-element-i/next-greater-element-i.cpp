class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     int i=0,j;
int max=-1;
     vector<int>vec;
     while(i<nums1.size())
     { max=-1;
       for(j=0;j<nums2.size();j++)
       {
         if (nums2[j]==nums1[i])
         { j++;
            while(j<nums2.size())
            {
                if(nums2[j]>nums1[i])
                {
                    max=nums2[j];
                    break;
                }
                else{
                    j++;
                }
               
            }
               if(max!=-1)
                {
                     break;
                }
         }

        }
     
     vec.push_back(max);
     i++;
     }   
  return vec;  }
};