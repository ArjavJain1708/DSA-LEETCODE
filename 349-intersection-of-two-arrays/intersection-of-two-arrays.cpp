class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int k,j;
    vector<int> rest;
    int i=0;
    while(i<nums1.size()-1)   
    {
      if(nums1[i]==nums1[i+1])
      {
        nums1.erase(nums1.begin()+i+1);
      }
      else{
        i++;
      }
    }
     i=0;
    while(i<nums2.size()-1)   
    {
      if(nums2[i]==nums2[i+1])
      {
        nums2.erase(nums2.begin()+i+1);
      }
      else{
        i++;
      }
    }
  if(nums1.size()>=nums2.size())
  {
      for(i=0;i<nums1.size();i++)
    {
       for(j=0;j<nums2.size();j++)
       {
         if(nums1[i]==nums2[j])
         {
           rest.push_back(nums1[i]);
         }
       }
    }
  }
   if(nums2.size()>nums1.size())
  {
      for(i=0;i<nums2.size();i++)
    {
       for(j=0;j<nums1.size();j++)
       {
         if(nums2[i]==nums1[j])
         {
           rest.push_back(nums2[i]);
         }
       }
    }
  }
return rest;  }
};