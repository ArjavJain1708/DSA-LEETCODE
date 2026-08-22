class Solution {
    /* memoisation not working TLE
private:
    int memo[105][105];

    int solve(int row, int col, int n, vector<vector<int>>& matrix) {
     
        if (col < 0 || col >= n) {
            return 1e9;
        }
        
        
        if (row == n - 1) {
            return matrix[row][col];
        }
        
       
        if (memo[row][col] != -1) {
            return memo[row][col];
        }
        
       
        int down       = solve(row + 1, col, n, matrix);
        int diag_left  = solve(row + 1, col - 1, n, matrix);
        int diag_right = solve(row + 1, col + 1, n, matrix);
        
        return memo[row][col] = matrix[row][col] + min({down, diag_left, diag_right});
    }*/

public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<m;i++){
            dp[0][i]=matrix[0][i];
        }
            for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                
                int left = 1e9;
                int up = 1e9;
                int right = 1e9;


                if(j-1>=0){
               left=dp[i-1][j-1]+matrix[i][j];
                }
                up=dp[i-1][j]+matrix[i][j];
                 if(j+1<m){
               right=dp[i-1][j+1]+matrix[i][j];
                 }
               dp[i][j]=min({left,up,right});
            }
            
        }
        int mini=INT_MAX;
        for(int i=0;i<m;i++){
          mini=min(mini,dp[n-1][i]);
        }
        return mini;
    }
};