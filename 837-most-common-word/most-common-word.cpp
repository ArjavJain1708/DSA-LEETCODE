class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int length=paragraph.length();
        int i,j,k,b=0,l=0,r=0;
        for(i=0;i<length;i++){
            if(!isalnum(paragraph[i])&&!isspace(paragraph[i])){
            paragraph[i]=' ';
            }
            else {
                paragraph[i] = tolower(paragraph[i]);
            }
        }
        string ban;
        for(i=0;i<banned.size();i++){
                  ban=banned[i];
                 
                 
                  for(j=0;j<paragraph.length();j++){
                     b=0;
                     l=0;
                     r=0;
                     // for standalone word discarding (hits,white) when banned word is hit 
                    if ((j == 0 || paragraph[j - 1] == ' ') && 
    (j + ban.length() == paragraph.length() || (j + ban.length() < paragraph.length() && paragraph[j + ban.length()] == ' '))){
                    for(k=0;k<ban.length()&&j+k<paragraph.length();k++){
                        if(ban[k]!=paragraph[j+k]){
                            b=1;
                            break;
                        }
                        else{
                            r++;
                        }
                    }
    }
                    if(b==0&&r==ban.length()){
                        while(l<ban.length()){
                           paragraph[j+l]=' ';
                           l++;
                        }
                    }
                  }
        }

 i=0;
int count=1;
int max_count=0;
string result;
string match;
        while(i<paragraph.length()){
            while(i < paragraph.length()&&paragraph[i]==' '){
               i++ ;
            }
            while(i < paragraph.length() && paragraph[i]!=' '){
                   match+=paragraph[i];
                   i++;
                   count=0;
            }
            if (match != ""){
               
            
            for(j=0;j<paragraph.length();j++){
                 b=0;
                 l=0;
                 r=0;
                if ((j == 0 || paragraph[j - 1] == ' ') && 
    (j + match.length() == paragraph.length() || (j + match.length() < paragraph.length() && paragraph[j +match.length()] == ' '))){
                for(k=0;k<match.length()&&j+k<paragraph.length();k++){
                      if(match[k]!=paragraph[j+k]){
                            b=1;
                            break;
                        }
                        else{
                            r++;
                        }
                    }
                         if(b==0&&r==match.length()){
                        count++;
                    }
                    
                    }
                    
                 }
                 if(count>max_count){
                        max_count=count;
                        result=match;
            }
            }
            match="";
        }
   return result; }
};