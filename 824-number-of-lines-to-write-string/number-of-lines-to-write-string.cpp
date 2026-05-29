class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int i=0;
        string t="";
        vector<string> store;
        vector<int> result;
        int pixel;
        while(i<s.length())
        {
           pixel=100;
          while (i<s.length()&&pixel>0)
          { pixel=pixel-widths[s[i]-'a'];
          cout<<pixel<<" ";
          if(pixel>=0)
          {
                  t=t+s[i];
                   i++;
          }
           if(pixel<=0||i==s.length())
          {
          store.push_back(t);
           t="";
 
          }
         
       
          }
        }
        result.push_back(store.size());
        result.push_back(100-pixel);
        return result;
    }
};