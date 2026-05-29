class Solution {
public:
//ARJAV
    string reverseOnlyLetters(string s) {
        char store[101];
        for(int i=0;i<100;i++){
            store[i]='~';
        }
      for(int i=0;i<s.length();i++){
        if(!isalpha(s[i])){
            store[i]=s[i];
        }
      }
      int j=0;
      int k=s.length()-1;
      while(k>=0){
        if(!isalpha(s[k])){
            k--;
        }
        else{
            while(j < s.length() && store[j] != '~') {
                    j++;
                }
            store[j]=s[k];
            k--;
            j++;
        }
      }
      store[s.length()] = '\0';

   return store; }
};
 /* while(j>=0&&!(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')){
                res+=s[j];
                j--;
            }
            while(j>=0&&((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
                store+=s[j];
                j--;
            }
           // reverse(store.begin(),store.end());
            res+=store;
            store="";
        }
*/