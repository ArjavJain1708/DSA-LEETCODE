class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        //ARJAV
         vector<string>res;
        if(nums.empty()){
            return res;
        }
        int a=nums[0];
        int i;
        string  b="", k;
       
        for(i=0;i<nums.size()-1;i++){
            if((long long)nums[i+1] - nums[i] > 1){
               
               
                if(b.empty()){
                 k+=to_string(a);
                res.push_back(k);
                k="";
                a=nums[i+1];
               }

                else{
                k+=to_string(a);
                k+='-';
                k+='>';
                k+=b;
                res.push_back(k);
                k="";
                a=nums[i+1];
                b="";
                }
               }
               else{
                 b=to_string(nums[i+1]);
               }
              }

         if(b!=""){
                 k+=to_string(a);
                k+='-';
                k+='>';
                k+=b;
                res.push_back(k);
               }
               else{
                res.push_back(to_string(a));
               }
   return res; }
};