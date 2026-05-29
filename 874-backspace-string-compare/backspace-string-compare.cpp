class Solution {
public:
//ARJAV
    bool backspaceCompare(string s, string t) {
        string sat="";
        string tat="";
       
        for(int i=0;i<s.length();i++){
            if(!(s[i]=='#')){
            sat+=s[i];
            }
            else{
                if (!sat.empty()){
               sat.pop_back();
                }
            }
            }
        
       
        for(int i=0;i<t.length();i++){
            if(!(t[i]=='#')){
            tat+=t[i];}
            else{
                if (!tat.empty()){
               tat.pop_back();
                }
            }
                }
        if(sat==tat){
            return true;
        }
   return false; }
};