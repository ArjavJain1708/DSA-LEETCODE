class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      string r;
      r+=s;
      r+=s;
      r[0]='0',r[r.length()-1]='0';
      return r.find(s) != string::npos;

    }
};