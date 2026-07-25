class Solution {
private:
    int lonsub(int ind1, int ind2, string &s1, string &s2, vector<vector<int>>& dp) {
        if (ind1 < 0 || ind2 < 0) {
            return 0;
        }
        if (dp[ind1][ind2] != -1) {
            return dp[ind1][ind2];
        }
        if (s1[ind1] == s2[ind2]) {
            return dp[ind1][ind2] = 1 + lonsub(ind1 - 1, ind2 - 1, s1, s2, dp);
        } else {
            return dp[ind1][ind2] = max(lonsub(ind1 - 1, ind2, s1, s2, dp), lonsub(ind1, ind2 - 1, s1, s2, dp));
        }
    }

public:
    int longestCommonSubsequence(string text1, string text2) {
        int ind1 = text1.length();
        int ind2 = text2.length();
        vector<vector<int>> dp(ind1, vector<int>(ind2, -1));
        return lonsub(ind1 - 1, ind2 - 1, text1, text2, dp);
    }
};