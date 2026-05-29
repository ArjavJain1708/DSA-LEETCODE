class Solution {
public:
//ARJAV
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int i;
        int sumalice=0;
        int sumbob=0;
        for(i=0;i<aliceSizes.size();i++){
              sumalice+=aliceSizes[i];
        }
        for(i=0;i<bobSizes.size();i++){
              sumbob+=bobSizes[i];
        }
        int target=(sumalice+sumbob)/2;
        int temp;
       int j;
       for(i=0;i<aliceSizes.size();i++){
            temp=sumalice-aliceSizes[i];
        for(j=0;j<bobSizes.size();j++){
              if(temp+bobSizes[j]==target){
                ans.push_back(aliceSizes[i]);
                ans.push_back(bobSizes[j]);
                return ans;
              }
        }
       }
   return ans; }
};