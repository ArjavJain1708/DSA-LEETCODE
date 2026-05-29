class Solution {
public:
//ARJAV
    int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++){
            int b=0;
            for(int j=0;j<s.length();j++){
                if(j==i){
                    continue;
                }
                if(s[j]==s[i]){
                  b=1;
                  break;
                }
            }
            if(b==0){
                return i;
            }
        }
    return -1;}
};