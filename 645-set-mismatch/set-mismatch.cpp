class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> shit;
       sort(nums.begin(),nums.end());
       int i,j,b=-1;
       for(i=1;i<=nums.size();i++)
       {
        
if(b==-1){
         auto it = find(nums.begin(),nums.end(),i);

    if (it != nums.end()) {
       ;
    } else {
        b=i;
    }
}
     if(i-1>=0&&i<nums.size()&&nums[i]==nums[i-1])
        { 
            j=nums[i];
        
        }
       
       }
       shit.push_back(j);
       shit.push_back(b); 

 return shit;   }
};