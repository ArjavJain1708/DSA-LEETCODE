class Solution {
public:
//ARJAV
    bool isIsomorphic(string s, string t) {
    if(s.length()!=t.length()){
        return false;}  
    char b;
    for(int i=0;i<s.length();i++){
        b=s[i];
        for(int j=i;j<s.length();j++){
            if(b==s[j]){
                if(t[i]!=t[j]){
                   return false;
                }}}}
for(int i=0;i<s.length();i++){
        b=t[i];
        for(int j=i;j<s.length();j++){
            if(b==t[j]){
                if(s[i]!=s[j]){
  return false;}}}} return true;  }
};