class Solution {
public:
//ARJAV
    bool canConstruct(string ransomNote, string magazine) {
        int j;
      for(int i=0;i<ransomNote.length();i++){
        while(j<magazine.length()){
            if(magazine[j]==ransomNote[i]){
                magazine[j]='0';
                break;
            }
            else{
                j++;
            }
        }
            if(j==magazine.length()){
                return false;
            }
            j=0;
        
      }  
   return true; }
};