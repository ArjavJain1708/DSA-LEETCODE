class Solution {
public:
void helper(int n,string curr,int count_open,int count_close,vector<string>&result){
    if(count_open==n&&count_close==n){
       result.push_back(curr);
       return; 
    }
    if(count_open==0){
        curr+='(';
        count_open++;
        helper(n,curr,count_open,count_close,result);
    }
    else if(count_open==count_close&&count_open<n){
        curr+='(';
        count_open++;
        helper(n,curr,count_open,count_close,result);
    }
    else if(count_open>count_close){
        if(count_open<n){
        curr+='(';
        helper(n,curr,count_open+1,count_close,result);
        curr.pop_back();
        }
        curr+=')';
        helper(n,curr,count_open,count_close+1,result);
        curr.pop_back();
    }
   else if(count_open>=n){
        curr+=')';
        count_close++;
        helper(n,curr,count_open,count_close,result);
    }
    return;
}
    vector<string> generateParenthesis(int n) {
    vector<string>result;
    string r="";
    helper(n,r,0,0,result);
    return result;
    }
};