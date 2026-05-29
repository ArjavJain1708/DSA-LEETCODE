class Solution {
public:
//ARJAV
    int numUniqueEmails(vector<string>& emails) {
        vector<string> store;
        for(int i=0;i<emails.size();i++){
            int count=0;
            int idx=-1;
            int b=0;
            string k="";
            while(emails[i].find('.',idx+1)!=string::npos){
                count++;
                idx=emails[i].find('.',idx+1);
            }
            if(count>1){
              for(int j=emails[i].length()-1;j>=0;j--){
               
                if(emails[i][j]=='@'){
                    b=1;
                  }

                if(b==1&&emails[i][j]=='.'){
                    continue;
                  }
    
                 if(b==0&&emails[i][j]=='.'){
                   
                    k+=emails[i][j];
                  }

                 if(emails[i][j]!='.'){
                    k+=emails[i][j];
                  }
                 
                 
              }
              reverse(k.begin(),k.end());
              int g=0;
              int h=0;// if + sign in domain name
              string r="";
              for(int p=0;p<k.length();p++){
                    if(g==0&&k[p]!='+'){
                    r+=k[p];
                   }
                   else if(k[p]=='+'&&g==0){
                   // r+=k[p];
                    g=1;
                    }

                    if(k[p]=='@'){
                   if(g==0){
                          h=1;
                   }
                   else{
                     r+=k[p];
                    g=0;
                    h=1;
                   }
                   }
               
                if(g==0&&h==1&&k[p]=='+'){
                    r+=k[p];
                   }
                  
              }
              store.push_back(r);
            
}
else {
    int g = 0;
    int h=0;
    string r = "";
    for(int p = 0; p < emails[i].length(); p++) {
        // 1. Always check for '@' first
        if(emails[i][p] == '@') {
            r += emails[i][p];
            g = 0; 
            h=1;
        }
        // 2. Check for '+' next
        else if(emails[i][p] == '+') {
           if(h==1){
            r+=emails[i][p];
           }
           else if(h==0){
             g=1;
           }
        }
        // 3. Add regular characters only if we aren't ignoring them
        else if(g == 0) {
            r += emails[i][p];
        }
    }
    store.push_back(r);
}
        }

        sort(store.begin(),store.end());
        int unique=1;
        for(int i=1;i<store.size();i++){
          if(store[i]!=store[i-1]){
            unique++;
          }
          
        }
   return unique; }
};