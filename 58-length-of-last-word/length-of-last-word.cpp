class Solution {
public:
    int lengthOfLastWord(string s) {
     int len,num=0;
     len=(s.length()-1);
     while (len>=0&&s[len]==' ')
     
     {
        len--;
     }
     while (len>=0&&s[len]!=' ')
     {
        num++;
        len--;
     }
     return num;

  
    }
};