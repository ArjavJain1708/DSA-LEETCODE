class Solution {
public:
//ARJAV
    vector<string> findWords(vector<string>& words) {
        string top="qwertyuiop";
        string mid="asdfghjkl";
        string low= "zxcvbnm";
        vector<string> ans;
       

      for(int i=0;i<words.size();i++){
        string r=words[i];
         for(int j=0;j<words[i].length();j++){
                words[i][j] = tolower(words[i][j]);
            }
        int count=0;
        for(int j=0;j<words[i].length();j++){
           for(int k=0;k<top.length();k++){
            if(top[k]==words[i][j]){
                count++;
            }
           }
        }
        if(count==words[i].length()){
            ans.push_back(r);
            continue;
        }
        else{
            count=0;
        }
         for(int j=0;j<words[i].length();j++){
           for(int k=0;k<mid.length();k++){
            if(mid[k]==words[i][j]){
                count++;
            }
           }
        }
        if(count==words[i].length()){
            ans.push_back(r);
            continue;
        }
        else{
            count=0;
        }
         for(int j=0;j<words[i].length();j++){
           for(int k=0;k<low.length();k++){
            if(low[k]==words[i][j]){
                count++;
            }
           }
        }
         if(count==words[i].length()){
            ans.push_back(r);
            continue;
        }
        else{
            count=0;
        }

      }
  return ans;  }
};