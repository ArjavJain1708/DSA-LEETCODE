class Solution {
public:
//ARJAV
    string reverseWords(string s) {
        int j=0,i=0;
        
        while(j<s.length()){
            while(j<s.length()&&s[j]==' '){
                j++;
            }
            int c=j;
            while(j<s.length()&&s[j]!=' '){
              j++;
            }
            int d=j;
            reverse(s.begin()+c,s.begin()+d);
            }
   return s; }
};