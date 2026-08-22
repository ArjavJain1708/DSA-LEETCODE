class Solution {
public:
int helper(int row,int idx1,int idx2,vector<vector<int>>&grid, vector<vector<vector<int>>>&dp,int n,int m,vector<int>&del){
    if(row==n){
    return 0;
   }


    if (idx1 < 0 || idx1 >= m || idx2 < 0 || idx2 >= m) {
            return -1e9;
        }
        
    int count=0;
   int maxi=-1e9;

   
   if(dp[row][idx1][idx2]!=-1){
    return dp[row][idx1][idx2];
   }
  // del={-1,0,1}
    for(int i=0;i<3;i++){
        count=0;
        for(int j=0;j<3;j++){
            
            count=helper(row+1,idx1+del[i],idx2+del[j],grid,dp,n,m,del);
             maxi=max(count,maxi);
        }
       
    }
    if(idx1!=idx2){
     dp[row][idx1][idx2]=grid[row][idx1]+grid[row][idx2]+maxi;
     }
     else{
     dp[row][idx1][idx2]=grid[row][idx2]+maxi;
     }
     return dp[row][idx1][idx2];
}
    int cherryPickup(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
     vector<int>del={-1,0,1};
     int n=grid.size();
     int m=grid[0].size();
     int waste=helper(0,0,m-1,grid,dp,n,m,del);
     return waste;
    }
};