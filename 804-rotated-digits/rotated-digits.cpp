class Solution {
public:
    int rotatedDigits(int n) {
        vector<int> flip = {0, 1, 5, -1, -1, 2, 9, -1, 8, 6};
        vector<int>dp(n+1,0);
        int temp=0;
        for(int i=2;i<=n;i++){
            temp=i;
            bool ok = false;
        while(temp>0){
            int c=temp%10;
            if (flip[c]==-1) {
                ok=false;
                break;
            }
            if (c!=flip[c]) {
                ok = true;
            }
            temp /= 10;
        }
        if (ok) dp[i]=dp[i-1]+1;
        else dp[i] = dp[i-1];
        }
    return dp[n];
    }
};