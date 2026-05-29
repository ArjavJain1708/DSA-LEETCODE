class Solution {
public:
//ARJAV
    string licenseKeyFormatting(string s, int k) {
        int j=0;
        string r;
        while(j<s.length()){
            if(!isalnum(s[j])){
               j++;
               continue;
            }

           r+=toupper(s[j]);
           j++;
        }
        int count=0;
        string temp;
        for(int i=r.length()-1;i>=0;i--){
           if(count==k){
           
            temp+='-';
             temp+=r[i];
            count=1;
            continue;
          } 
          temp+=r[i];
          count++;
        }
        reverse(temp.begin(),temp.end());
return temp;    }
};