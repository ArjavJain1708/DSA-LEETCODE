class Solution {
public:
/*int helper(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
    if(i==triangle.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
   
 
    return dp[i][j]=triangle[i][j]+min(helper(i+1,j,triangle,dp),helper(i+1,j+1,triangle,dp));
    
}*/
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        // Initialize DP table with -1 (size matches triangle rows)
        vector<vector<int>> dp(n, vector<int>(n, 1e9));
        
        // Start from the top (0, 0)
        //TLE
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){

              int up_left = (j > 0) ? dp[i - 1][j - 1] : 1e9;
              int up_right = (j < i) ? dp[i - 1][j] : 1e9;
             dp[i][j] = triangle[i][j] + min(up_left, up_right);
            }
        }
          int min=1e9;
for(int j=0;j<triangle[triangle.size()-1].size();j++){
  
    if(dp[triangle.size()-1][j]<min){
min=dp[triangle.size()-1][j];
    }
}
    return min;}
};