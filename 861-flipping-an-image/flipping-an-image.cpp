class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>result;
      

        int n=image.size();
        result.resize(n);
        for(int k=0;k<n;k++){
            result[k].resize(n);
        }
        
        for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(image[j][i]==0)
            {
            result[j][n-i-1]=1;
            }
            else
            {
            result[j][n-i-1]=0; 
            }
        }
    } 

   return result; }
};