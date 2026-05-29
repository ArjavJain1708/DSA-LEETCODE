class Solution {
public:
    bool detectCapitalUse(string word) {
        int i;
      if(1<word.length()&&(word[0]>='A'&&word[0]<='Z')&&(word[1]>='A'&&word[1]<='Z'))  {
        for(i=0;i<word.length();i++){
            if(!(word[i]>='A'&&word[i]<='Z')){
                return false;
            }
        }
        return true;
        }
        if(1<word.length()&&(word[0]>='A'&&word[0]<='Z')&&(word[1]>='a'&&word[1]<='z'))  {
        for(i=1;i<word.length();i++){
            if((word[i]>='A'&&word[i]<='Z')){
                return false;
            }
        }
        return true;
        }

      if(1<word.length()&&(word[0]>='a'&&word[0]<='z')&&(word[1]>='a'&&word[1]<='z'))  {
        for(i=0;i<word.length();i++){
            if((word[i]>='A'&&word[i]<='Z')){
                return false;
            }
        }
        return true;
        }
   if(word.length()<=1)  {
    return true;
   } 
      

  return false;  }
};