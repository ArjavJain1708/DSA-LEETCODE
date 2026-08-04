class Solution {
public:
void helper(int idx, unordered_map<char, string>& phonemap, string& digits, string current, vector<string>& result){
if(idx<0){
    reverse(current.begin(),current.end());
    result.push_back(current);
    return;
}
    
current+=phonemap[digits[idx]][0];
helper(idx-1,phonemap, digits,current,result);
current.pop_back();
 current+=phonemap[digits[idx]][1];
helper(idx-1,phonemap, digits,current,result);
current.pop_back();
 current+=phonemap[digits[idx]][2];
helper(idx-1,phonemap, digits,current,result);
current.pop_back();
if(digits[idx]=='7'||digits[idx]=='9'){
 current+=phonemap[digits[idx]][3];
    helper(idx-1,phonemap, digits,current,result);
    current.pop_back();
}
return ;
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> phonemap = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    string current="";
    vector<string> results;
        helper(digits.length()-1,phonemap,digits,current,results);
        return results;
    }
};