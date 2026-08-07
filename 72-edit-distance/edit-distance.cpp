class Solution {
private:
    int helper(int i, int j, string& w1, string& w2, vector<vector<int>>& dp) {
        // If word1 is exhausted, we need to insert all remaining characters of word2
        if (i < 0) return j + 1;
        // If word2 is exhausted, we need to delete all remaining characters of word1
        if (j < 0) return i + 1;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        // If characters match, no operation needed, move both pointers
        if (w1[i] == w2[j]) {
            return dp[i][j] = helper(i - 1, j - 1, w1, w2, dp);
        }
        
        // If they don't match, try all 3 operations and take the minimum + 1
        int insertOp = helper(i, j - 1, w1, w2, dp);
        int deleteOp = helper(i - 1, j, w1, w2, dp);
        int replaceOp = helper(i - 1, j - 1, w1, w2, dp);
        
        return dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
    }

public:
    int minDistance(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        return helper(n1 - 1, n2 - 1, word1, word2, dp);
    }
};