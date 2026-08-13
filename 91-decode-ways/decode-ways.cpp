class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n + 1, 0);
        dp[0] = 1; // Base case: an empty string has 1 way to be decoded
        dp[1] = (s[0] != '0') ? 1 : 0; // First character

        for(int i = 2; i <= n; i++) {
            // Single digit check (corresponds to s[i-1])
            if(s[i - 1] != '0') {
                dp[i] += dp[i - 1];
            }
            
            // Two digit check (corresponds to s[i-2] and s[i-1])
            int twoDigit = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            if(twoDigit >= 10 && twoDigit <= 26) {
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};