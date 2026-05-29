class Solution {
public:
    int countSegments(string s) {
        int j=0;
        int segment=0;
         string r;
        while(j<s.length()){
           r="";
            while(j<s.length()&&s[j]!=' '){
                r+=s[j];
                j++;
            }
            if(r.length()>0){
               segment++;
            }
            else{
                j++;
            }
        }
   return segment; }
};