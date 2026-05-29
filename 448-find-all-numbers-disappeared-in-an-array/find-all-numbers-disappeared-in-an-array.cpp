class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int i,k=nums.size();
    vector<int> vec;
    sort(nums.begin(),nums.end());
     for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i+1);
                i--;
            }
        }
    int j=0;
    for(i=1;i<=k;i++) 
    {
        if(nums[j]!=i)
        {
            vec.push_back(i);
           
        }
        else{
            j++;
        }
       
    }   
   
     return vec;}
};