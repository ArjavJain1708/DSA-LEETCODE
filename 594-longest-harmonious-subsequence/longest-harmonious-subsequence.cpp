class Solution {
public:
    int findLHS(vector<int>& nums) {
      int l=0,j,length=0,b;
      int maxlength=0;
      sort(nums.begin(),nums.end())  ;
      while(l<nums.size())
      { length=0;
        for(j=l;j<nums.size();j++)
        {
          if((nums[j]==nums[l])||(nums[j]-nums[l]==1))
          {
            length++;
            b=j;
          }
        //   else{
        //     if(length>maxlength)
        //     {
        //         maxlength=length;
        //         break;
        //     }
           
        //   }
        
        }
        if(length>maxlength&&nums[b]-nums[l]==1){
         maxlength=length;
        }
           l++;
      }
  return maxlength;
}
};