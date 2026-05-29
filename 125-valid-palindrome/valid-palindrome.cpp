class Solution {
public:
//ARJAV
    bool isPalindrome(string s) {
      int i;
      for(i=0;i<s.length();i++){
        if(!isalnum(s[i])){
            s[i]=' ';
        }
      }  
      string k;
      i=0;
      while(i<s.length()){
        if(s[i]==' '){
           i++ ;
           continue;
        }
        k+=tolower(s[i]);
        i++;
        }
        int left=0;
        int right=k.length()-1;
       while(left<right+1){
        if(k[left]==k[right]){
            left++;
            right--;
        }
        else{
            return false;
        }
       }
   return true; }
};