class Solution {
public:
string helper(int n,vector<string>&dp){
    if(n==1){
        return "1";
    }
    if(dp[n]!=""){
        return dp[n];
    }
    string s=helper(n-1,dp);
    int count=1;
    int j=0;
    string result="";
    while(j<s.length()){
        int i=1;
        count=1;
        while(i+j<s.length()&&s[j]==s[i+j]){
            count++;
            i++;
        }
      result += (count + '0');
      result+=s[j];
        j=j+i;
        }
        return (dp[n]=result);


}
    string countAndSay(int n) {
    vector<string> dp(n+1,"");
    string ans=helper(n,dp);
    return ans;
    } 
};