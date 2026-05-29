class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      vector<string> guide={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}  ;
      string s="";
      vector<string> out;
      int k,b=0,i,j;
      for(i=0;i<words.size();i++)
      { s="";b=0;
        for(j=0;j<words[i].length();j++)
        {
          s=s+guide[words[i][j]-'a'];
        }
        if(out.empty()) out.push_back(s);
        else{
        for(k=0;k<out.size();k++)
        {
          if(s==out[k])
          {
            b=1;
            break;

          }
        }
        }
        if(b==0)
        {
            out.push_back(s);
        }
      }
      return out.size()-1;
    }
};