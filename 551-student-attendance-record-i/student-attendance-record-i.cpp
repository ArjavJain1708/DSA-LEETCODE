class Solution {
public:
//ARJAV
    bool checkRecord(string s) 
    {
        int counta=0;
        int countl=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                counta++;
            }
            if(s[i]=='L'){
                if(i+2<s.length()&&s[i+1]=='L'&&s[i+2]=='L'){
                    return false;
                }
            }
        }
        if(counta>=2){
            return false;
        }
   return true; }
};