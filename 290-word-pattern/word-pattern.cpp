class Solution {
public:
//ARJAV
struct node{
    char key;
    string value;
};
 int hashval(char a){
    return ((a-'a')%26);
 }
 int j=0;
 int k;
 string r="";
    bool wordPattern(string pattern, string s) {
      list<node>store[26];
        
      for(int i=0;i<pattern.length();i++){
        // important check if string contains more
          if(j>=s.length()){
        return false;
    }
      while(j<s.length()&&s[j]!=' '){
        r+=s[j];
        j++;
      }
      k=hashval(pattern[i]);
/// empty wala case ka first check from chatgpt


     if(store[k].empty()){
    // To prevent two different keys mapping to the SAME word:
    // We must check if any other bucket already contains this word 'r'
    for (int h = 0; h < 26; h++) {
    if (!store[h].empty() && store[h].front().value == r) {
        return false; 
        }
                }

   // learned from chatgpt
       node newNode;
                newNode.key = pattern[i];
                newNode.value = r;
                store[k].push_back(newNode);
     } 
     else{
        if(store[k].front().value!=r){
          return false;
        }
     }


      r="";
    j++;  }
    // if pattern contains less
      if(j<s.length()){
        return false;
    }
  
   return true; }
};